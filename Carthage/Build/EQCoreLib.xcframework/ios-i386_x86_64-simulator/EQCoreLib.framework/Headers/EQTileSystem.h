//
//  EQTileSystem.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 27/01/2020.
//  Copyright © 2020 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

static const int kQuadKeyMaxLevelOfDetail = 23;

struct TSPixel {
    NSInteger x;
    NSInteger y;
};
typedef struct TSPixel TSPixel;

static inline TSPixel
TSPixelMake(NSInteger x, NSInteger y)
{
    TSPixel pixel;
    pixel.x = x;
    pixel.y = y;
    return pixel;
}

struct TSTile {
    NSInteger x;
    NSInteger y;
    NSInteger levelOfDetail;
};
typedef struct TSTile TSTile;

static inline TSTile
TSTileMake(NSInteger x, NSInteger y, NSInteger levelOfDetail)
{
    TSTile tile;
    tile.x = x;
    tile.y = y;
    tile.levelOfDetail = levelOfDetail;
    return tile;
}

NS_ASSUME_NONNULL_BEGIN

@interface EQTileSystem : NSObject

+ (TSPixel)pixelWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude levelOfDetail:(NSInteger)levelOfDetail;
+ (CLLocationCoordinate2D)coordinateWithPixel:(TSPixel)pixel levelOfDetail:(NSInteger)levelOfDetail;
+ (TSTile)tileWithPixel:(TSPixel)pixel levelOfDetail:(NSInteger)levelOfDetail;
+ (TSPixel)pixelWithTile:(TSTile)tile;
+ (NSString *)quadKeyWithTile:(TSTile)tile;
+ (NSString *)quadKeyWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude levelOfDetail:(NSInteger)levelOfDetail;
+ (TSTile)tileForQuadKey:(NSString *)quadKey;

@end

NS_ASSUME_NONNULL_END
