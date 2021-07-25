//
//  AppDelegate.swift
//  Telstra Carthage Test
//
//  Created by David Rodrigues on 15/06/2021.
//

import UIKit
import EQCoreLib

@main
class AppDelegate: UIResponder, UIApplicationDelegate, EQDQAIDGenerationDelegate, EQUpdateConfigDelegate {
    func didGenerateDQAID() {
        startSDK()
    }
    
    func didFailDQAIDGenerationWithError(_ error: EQError!) {
        
    }
    
    func onCouponSuccess() {
        
    }
    
    func onCouponError(_ error: EQError!) {
        
    }
    
    func didUpdateConfig(_ configurationTimestamp: Int) {
        startTest()
    }
    
    func alreadyUpToDate() {
        startTest()
    }

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        EQCore.sharedInstance().initCore(options: launchOptions)
        EQCore.sharedInstance().backgroundAppRefreshTask("com.telstra.mytelstra.background.refresh")
        EQCore.sharedInstance().backgroundProcessingTask("com.telstra.mytelstra.background.processing")

        startSDK()
        
        return true
    }
    
    func startSDK() {
        switch EQCore.sharedInstance().status() {
            case .idle:
                break
            case .running:
                break
            case .dqaidMissing:
                EQCore.sharedInstance().acceptEula(withDQAIDDelegate: self, coupon: "tlstra")
            case .dqaidExpired:
                break
            case .dqaidOk:
                var error: EQError?
                EQCore.sharedInstance().startWithError(&error)
                EQCore.sharedInstance().agentInformationManager.updateConfig(with: self)
            @unknown default:
                break
        }
    }

    func startTest() {
        print("Start test !")
    }

}

