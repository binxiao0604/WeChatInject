//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerRencentDevicePool;
@protocol WAMediaCastingRoutePickerViewModelDelegate;

@interface WAMediaCastingRoutePickerViewModel : NSObject
{
    _Bool _isSearching;
    id <WAMediaCastingRoutePickerViewModelDelegate> _delegate;
    WAMediaCastingRoutePickerDeviceItem *_currentDevice;
    unsigned long long _currentDeviceStatus;
    NSString *_guideURLString;
    NSString *_titleLocalString;
    NSString *_guideLocalString;
    NSString *_recentDeviceLocalString;
    NSString *_availableDeviceLocalString;
    WAMediaCastingRoutePickerDeviceItem *_airPlayDevice;
    NSArray *_availableDeviceList;
    WAMediaCastingRoutePickerRencentDevicePool *_recentDevicePool;
    NSString *_guidLocalString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *guidLocalString; // @synthesize guidLocalString=_guidLocalString;
@property(retain, nonatomic) WAMediaCastingRoutePickerRencentDevicePool *recentDevicePool; // @synthesize recentDevicePool=_recentDevicePool;
@property(copy, nonatomic) NSArray *availableDeviceList; // @synthesize availableDeviceList=_availableDeviceList;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *airPlayDevice; // @synthesize airPlayDevice=_airPlayDevice;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(copy, nonatomic) NSString *availableDeviceLocalString; // @synthesize availableDeviceLocalString=_availableDeviceLocalString;
@property(copy, nonatomic) NSString *recentDeviceLocalString; // @synthesize recentDeviceLocalString=_recentDeviceLocalString;
@property(readonly, copy, nonatomic) NSString *guideLocalString; // @synthesize guideLocalString=_guideLocalString;
@property(copy, nonatomic) NSString *titleLocalString; // @synthesize titleLocalString=_titleLocalString;
@property(copy, nonatomic) NSString *guideURLString; // @synthesize guideURLString=_guideURLString;
@property(nonatomic) unsigned long long currentDeviceStatus; // @synthesize currentDeviceStatus=_currentDeviceStatus;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *lastConnectedDeviceList;
- (void)notifyCurrentDeviceStatusChanged;
- (void)notifySearchingStatusChanged;
- (void)notifyDataChanged;
- (void)appendLastConnectDevice:(id)arg1;
- (void)updateCurrentDeviceStatus:(unsigned long long)arg1;
- (void)updateCurrentDevice:(id)arg1;
- (void)updateSearchingStatus:(_Bool)arg1;
- (void)updateUpnpDeviceList:(id)arg1;
- (id)init;

@end

