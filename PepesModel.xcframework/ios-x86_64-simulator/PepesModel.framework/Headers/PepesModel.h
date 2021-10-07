#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PepesModelCategoryInbox, PepesModelGiftCardDetail, PepesModelGiftCardPayload, PepesModelInboxStatus, PepesModelInbox, PepesModelInboxDeeplink, PepesModelInboxGiftCard, PepesModelInboxInfo, PepesModelInboxPromo, PepesModelInboxReminder, PepesModelKotlinEnumCompanion, PepesModelKotlinEnum<E>, PepesModelInboxStatusCompanion, PepesModelKotlinArray<T>, PepesModelInboxWebView, PepesModelLanguage, PepesModelLanguageBahasa, PepesModelLanguageENglish, PepesModelPayloadInboxPromo, PepesModelRequestCategoryInboxStatus, PepesModelRequestCategoryInboxStatusSuccessLocal, PepesModelRequestCategoryInboxStatusSuccessRemote, PepesModelRequestInboxCollectionStatus, PepesModelRequestInboxCollectionStatusSuccessLocal, PepesModelRequestInboxCollectionStatusSuccessRemote, PepesModelSuccessRemoteInbox;

@protocol PepesModelKotlinComparable, PepesModelKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PepesModelBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PepesModelBase (PepesModelBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PepesModelMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PepesModelMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPepesModelKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PepesModelNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface PepesModelByte : PepesModelNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PepesModelUByte : PepesModelNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PepesModelShort : PepesModelNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PepesModelUShort : PepesModelNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PepesModelInt : PepesModelNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PepesModelUInt : PepesModelNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PepesModelLong : PepesModelNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PepesModelULong : PepesModelNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PepesModelFloat : PepesModelNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PepesModelDouble : PepesModelNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PepesModelBoolean : PepesModelNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryInbox")))
@interface PepesModelCategoryInbox : PepesModelBase
- (instancetype)initWithIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("init(idCategory:categoryName:countUnread:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (PepesModelCategoryInbox *)doCopyIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("doCopy(idCategory:categoryName:countUnread:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *categoryName __attribute__((swift_name("categoryName")));
@property int32_t countUnread __attribute__((swift_name("countUnread")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GiftCardDetail")))
@interface PepesModelGiftCardDetail : PepesModelBase
- (instancetype)initWithImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amount:(NSString *)amount header:(NSString *)header messageBody:(NSString *)messageBody footer:(NSString *)footer senderName:(NSString *)senderName info:(NSString *)info __attribute__((swift_name("init(imageCard:imageEnvelope:title:amount:header:messageBody:footer:senderName:info:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (PepesModelGiftCardDetail *)doCopyImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amount:(NSString *)amount header:(NSString *)header messageBody:(NSString *)messageBody footer:(NSString *)footer senderName:(NSString *)senderName info:(NSString *)info __attribute__((swift_name("doCopy(imageCard:imageEnvelope:title:amount:header:messageBody:footer:senderName:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *footer __attribute__((swift_name("footer")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) NSString *imageCard __attribute__((swift_name("imageCard")));
@property (readonly) NSString *imageEnvelope __attribute__((swift_name("imageEnvelope")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property (readonly) NSString *messageBody __attribute__((swift_name("messageBody")));
@property (readonly) NSString *senderName __attribute__((swift_name("senderName")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GiftCardPayload")))
@interface PepesModelGiftCardPayload : PepesModelBase
- (instancetype)initWithImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amountBonbal:(NSString *)amountBonbal header:(NSString *)header content:(NSString *)content footer:(NSString *)footer sender:(NSString *)sender info:(NSString *)info __attribute__((swift_name("init(imageCard:imageEnvelope:title:amountBonbal:header:content:footer:sender:info:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (PepesModelGiftCardPayload *)doCopyImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amountBonbal:(NSString *)amountBonbal header:(NSString *)header content:(NSString *)content footer:(NSString *)footer sender:(NSString *)sender info:(NSString *)info __attribute__((swift_name("doCopy(imageCard:imageEnvelope:title:amountBonbal:header:content:footer:sender:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PepesModelGiftCardDetail *)toGiftCardDetail __attribute__((swift_name("toGiftCardDetail()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amountBonbal __attribute__((swift_name("amountBonbal")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString *footer __attribute__((swift_name("footer")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) NSString *imageCard __attribute__((swift_name("imageCard")));
@property (readonly) NSString *imageEnvelope __attribute__((swift_name("imageEnvelope")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property (readonly) NSString *sender __attribute__((swift_name("sender")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface PepesModelGreeting : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((swift_name("Inbox")))
@interface PepesModelInbox : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Deeplink")))
@interface PepesModelInboxDeeplink : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (PepesModelInboxDeeplink *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.GiftCard")))
@interface PepesModelInboxGiftCard : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (PepesModelInboxGiftCard *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Info")))
@interface PepesModelInboxInfo : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (PepesModelInboxInfo *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Promo")))
@interface PepesModelInboxPromo : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (PepesModelInboxPromo *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Reminder")))
@interface PepesModelInboxReminder : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (PepesModelInboxReminder *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PepesModelKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PepesModelKotlinEnum<E> : PepesModelBase <PepesModelKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PepesModelKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Status")))
@interface PepesModelInboxStatus : PepesModelKotlinEnum<PepesModelInboxStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PepesModelInboxStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PepesModelInboxStatus *unread __attribute__((swift_name("unread")));
@property (class, readonly) PepesModelInboxStatus *read __attribute__((swift_name("read")));
+ (PepesModelKotlinArray<PepesModelInboxStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.StatusCompanion")))
@interface PepesModelInboxStatusCompanion : PepesModelBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesModelInboxStatusCompanion *shared __attribute__((swift_name("shared")));
- (PepesModelInboxStatus *)getParam:(NSString * _Nullable)param __attribute__((swift_name("get(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.WebView")))
@interface PepesModelInboxWebView : PepesModelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (PepesModelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (PepesModelInboxWebView *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(PepesModelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) PepesModelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Language")))
@interface PepesModelLanguage : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.Bahasa")))
@interface PepesModelLanguageBahasa : PepesModelLanguage
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)bahasa __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesModelLanguageBahasa *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.ENglish")))
@interface PepesModelLanguageENglish : PepesModelLanguage
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)eNglish __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesModelLanguageENglish *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayloadInboxPromo")))
@interface PepesModelPayloadInboxPromo : PepesModelBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PepesModelPayloadInboxPromo *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface PepesModelPlatform : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("RequestCategoryInboxStatus")))
@interface PepesModelRequestCategoryInboxStatus : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<PepesModelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCategoryInboxStatus.SuccessLocal")))
@interface PepesModelRequestCategoryInboxStatusSuccessLocal : PepesModelRequestCategoryInboxStatus
- (instancetype)initWithData:(NSArray<PepesModelCategoryInbox *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<PepesModelCategoryInbox *> *)component1 __attribute__((swift_name("component1()")));
- (PepesModelRequestCategoryInboxStatusSuccessLocal *)doCopyData:(NSArray<PepesModelCategoryInbox *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PepesModelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCategoryInboxStatus.SuccessRemote")))
@interface PepesModelRequestCategoryInboxStatusSuccessRemote : PepesModelRequestCategoryInboxStatus
- (instancetype)initWithData:(NSArray<PepesModelCategoryInbox *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<PepesModelCategoryInbox *> *)component1 __attribute__((swift_name("component1()")));
- (PepesModelRequestCategoryInboxStatusSuccessRemote *)doCopyData:(NSArray<PepesModelCategoryInbox *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PepesModelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("RequestInboxCollectionStatus")))
@interface PepesModelRequestInboxCollectionStatus : PepesModelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInboxCollectionStatus.SuccessLocal")))
@interface PepesModelRequestInboxCollectionStatusSuccessLocal : PepesModelRequestInboxCollectionStatus
- (instancetype)initWithTotal_page:(int32_t)total_page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("init(total_page:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<PepesModelInbox *> *)component2 __attribute__((swift_name("component2()")));
- (PepesModelRequestInboxCollectionStatusSuccessLocal *)doCopyTotal_page:(int32_t)total_page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("doCopy(total_page:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PepesModelInbox *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t total_page __attribute__((swift_name("total_page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInboxCollectionStatus.SuccessRemote")))
@interface PepesModelRequestInboxCollectionStatusSuccessRemote : PepesModelRequestInboxCollectionStatus
- (instancetype)initWithTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("init(total_page:page:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<PepesModelInbox *> *)component3 __attribute__((swift_name("component3()")));
- (PepesModelRequestInboxCollectionStatusSuccessRemote *)doCopyTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("doCopy(total_page:page:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PepesModelInbox *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t total_page __attribute__((swift_name("total_page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRemoteInbox")))
@interface PepesModelSuccessRemoteInbox : PepesModelBase
- (instancetype)initWithTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("init(total_page:page:data:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<PepesModelInbox *> *)component3 __attribute__((swift_name("component3()")));
- (PepesModelSuccessRemoteInbox *)doCopyTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<PepesModelInbox *> *)data __attribute__((swift_name("doCopy(total_page:page:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PepesModelInbox *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t total_page __attribute__((swift_name("total_page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PepesModelKotlinEnumCompanion : PepesModelBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PepesModelKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PepesModelKotlinArray<T> : PepesModelBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PepesModelInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PepesModelKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PepesModelKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
