/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCopying-Protocol.h"

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying>
{
    NSString *_uniqueStringRepresentation;
//    struct NSString *_type;
    NSString *_displayIdentifier;
}

+ (id)displayItemWithType:(NSString *)arg1 displayIdentifier:(id)arg2;
@property(readonly, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)uniqueStringRepresentation;
- (id)_calculateUniqueStringRepresentation;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;
//- (id)initWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;

@end

