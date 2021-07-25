//
//  ViewController.swift
//  Telstra Carthage Test
//
//  Created by David Rodrigues on 15/06/2021.
//

import UIKit
import EQCoreLib

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func startTestButtonPressed(_ sender: Any) {
        let scenarioManager = EQCore.sharedInstance()?.scenarioManager
//        let scenarios = scenarioManager?.scenariosAvailable()
        if let scenariosAvailable = scenarioManager?.scenariosAvailable()?.first as? EQScenarioConfiguration {
            let scenario = scenarioManager?.scenario(for: .http, mode: .ocm, scenarioConfiguration: scenariosAvailable)
            scenario?.start(with: self)

        } else {
            //delegate?.finishedSpeedTestWithError(.noScenarios)
        }


//        EQCore.sharedInstance().scenarioManager.scenario(for: .chainedTests, mode: .ocm).start(with: self)
//        EQCore.sharedInstance().scenarioManager.scenario(for: .http, mode: .ocm).start(with: self)
    }
    
}

extension ViewController: EQScenarioDelegate {
    
    func scenarioWillStart(_ scenario: EQScenario?) {
        print("scenarioWillStart(\(String(describing: scenario)))")
    }
    
    func step(_ step: EQHttpStepDetailConfiguration, willStartTransferWithSize size: UInt64) {
        print("step(\(step) willStartTransferWithSize \(size))")
    }

    func stepDidFinishTransfer(_ step: EQHttpStepDetailConfiguration) {
        print("stepDidFinishTransfer(\(step))")
    }
    
    func scenario(_ scenario: EQScenario?, didFinishWith status: EQScenarioStatus) {
        print("scenario(\(String(describing: scenario)) didFinishWith \(status))")
    }
}

extension ViewController: EQHttpScenarioDelegate {

    func step(_ step: EQHttpStepDetailConfiguration, didUpdateLatency latency: TimeInterval) {
        print("boom")
    }

    func step(_ step: EQHttpStepDetailConfiguration, didTransferSize size: UInt64, duration: TimeInterval, percent: Double) {
        print("boom")
    }

    func step(_ step: EQHttpStepConfiguration,
              didSelectStepDetailsConfiguration stepDetail: EQHttpStepDetailConfiguration,
              networkTechnology: EQNetworkTechnology) {
        print("boom")
    }
}
