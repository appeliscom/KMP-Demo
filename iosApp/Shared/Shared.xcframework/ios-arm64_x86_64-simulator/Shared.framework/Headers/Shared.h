#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedBase, SharedMutableSet<E>, SharedMutableDictionary<K, V>, SharedNumber, SharedByte, SharedUByte, SharedShort, SharedUShort, SharedInt, SharedUInt, SharedLong, SharedULong, SharedFloat, SharedDouble, SharedBoolean, SharedKotlinEnum<E>, SharedKotlinEnumCompanion, SharedKotlinByteArray, SharedKotlinNothing, SharedKotlinArray<T>, SharedKotlinCancellationException, SharedKotlinIllegalStateException, SharedKotlinRuntimeException, SharedKotlinException, SharedKotlinThrowable, SharedKotlinByteIterator, SharedKotlinPair<A, B>, SharedKotlinLazyThreadSafetyMode, SharedKotlinUnit, SharedKotlinDoubleArray, SharedKotlinIntArray, SharedKotlinLongArray, SharedKotlinFloatArray, SharedKotlinKTypeProjection, SharedKotlinKTypeProjectionCompanion, SharedKotlinDoubleIterator, SharedKotlinIntIterator, SharedKotlinLongIterator, SharedKotlinFloatIterator, SharedKotlinKVariance, SharedAddress, SharedAddressCompanion, SharedCurrency, SharedCurrencyCompanion, SharedCursorBackwardPagingParams, SharedCursorBackwardPagingParamsCompanion, SharedCursorForwardPagingParams, SharedCursorForwardPagingParamsCompanion, SharedFile, SharedFileCompanion, SharedHexColor, SharedHexColorCompanion, SharedLanguage, SharedLanguageCompanion, SharedLocation, SharedLocationCompanion, SharedPageInfo, SharedPageInfoCompanion, SharedPagingParams, SharedPagingParamsCompanion, SharedPicture, SharedPictureCompanion, SharedPriceValue, SharedPriceValueCompanion, SharedSemVer, SharedSemVerCompanion, SharedSortOrder, SharedSortOrderCompanion, SharedTimeRange, SharedTimeRangeCompanion, SharedDeviceEvent, SharedDeviceEventCompanion, SharedDeviceEventType, SharedDeviceEventTypeCompanion, SharedDeviceEventsArray, SharedDeviceEventsArrayCompanion, SharedGetDeviceEventsRequest, SharedGetDeviceEventsRequestCompanion, SharedGetDeviceEventsResponse, SharedGetDeviceEventsResponseCompanion, SharedGrpcDeviceEventsClient, SharedLeafletRepository, SharedLeafletSuspendClientImpl, SharedObjectId, SharedObjectIdCompanion, SharedUUID, SharedUUIDCompanion, SharedWeekDay, SharedWeekDayCompanion, SharedAddOrUpdateSettingsRequest, SharedAddOrUpdateSettingsRequestCompanion, SharedAddOrUpdateUserRequest, SharedAddOrUpdateUserRequestCompanion, SharedAddOrUpdateUserRequestV2, SharedAddOrUpdateUserRequestV2Companion, SharedAddOrUpdateUserResponseV2, SharedAddOrUpdateUserResponseV2AddUserError, SharedAddOrUpdateUserResponseV2AddUserErrorCompanion, SharedAddOrUpdateUserResponseV2Companion, SharedCreateRequest, SharedCreateRequestCompanion, SharedCreateRequestCredentials, SharedCreateRequestCredentialsCompanion, SharedCreateRequestDeviceKey, SharedCreateRequestDeviceKeyCompanion, SharedCreateRequestProjectUserLoginToken, SharedCreateRequestProjectUserLoginTokenCompanion, SharedCreateRequestUserLoginToken, SharedCreateRequestUserLoginTokenCompanion, SharedCreateResponse, SharedCreateResponseCompanion, SharedCreateResponseError, SharedCreateResponseErrorCompanion, SharedDeleteUserRequest, SharedDeleteUserRequestCompanion, SharedDeviceData, SharedDeviceDataCompanion, SharedDeviceLang, SharedDeviceLangCompanion, SharedDeviceResponse, SharedDeviceResponseCompanion, SharedDeviceResponseError, SharedDeviceResponseErrorCompanion, SharedDeviceType, SharedDeviceTypeCompanion, SharedDevicesResponse, SharedDevicesResponseCompanion, SharedFirebaseConfigResponse, SharedFirebaseConfigResponseCompanion, SharedGetDeviceByTemporaryIdRequest, SharedGetDeviceByTemporaryIdRequestCompanion, SharedGetDeviceRequest, SharedGetDeviceRequestCompanion, SharedGetDevicesRequest, SharedGetDevicesRequestCompanion, SharedGetTokenDeviceRequest, SharedGetTokenDeviceRequestCompanion, SharedGetTokenDeviceResponse, SharedGetTokenDeviceResponseCompanion, SharedGetTokenUserResponse, SharedGetTokenUserResponseCompanion, SharedGetUserForLoginRequest, SharedGetUserForLoginRequestCompanion, SharedGetUserForLoginTokenRequest, SharedGetUserForLoginTokenRequestCompanion, SharedGetUsersDevicesRequest, SharedGetUsersDevicesRequestCompanion, SharedGetUsersDevicesResponse, SharedGetUsersDevicesResponseCompanion, SharedGetUsersRequest, SharedGetUsersRequestCompanion, SharedGetUsersResponse, SharedGetUsersResponseCompanion, SharedGrpcDeviceAdminClient, SharedGrpcDeviceRegistrationClient, SharedGrpcDeviceServiceClient, SharedGrpcIdentityServiceClient, SharedGrpcProjectSettingsAdminClient, SharedGrpcProjectSettingsServiceClient, SharedGrpcWebUsersPrivateServiceClient, SharedGrpcWebUsersPrivateServiceV2Client, SharedGrpcWebUsersServiceClient, SharedLogoutUserRequest, SharedLogoutUserRequestCompanion, SharedLogoutUserResponse, SharedLogoutUserResponseCompanion, SharedLogoutUsersRequest, SharedLogoutUsersRequestCompanion, SharedMobileDevice, SharedMobileDeviceCompanion, SharedMobileDevicesArray, SharedMobileDevicesArrayCompanion, SharedPermissionError, SharedPermissionErrorCompanion, SharedProjectRequest, SharedProjectRequestCompanion, SharedProjectSettings, SharedProjectSettingsCompanion, SharedProjectSettingsArray, SharedProjectSettingsArrayCompanion, SharedProjectSettingsRequest, SharedProjectSettingsRequestCompanion, SharedProjectsResponse, SharedProjectsResponseCompanion, SharedRefreshRequest, SharedRefreshRequestCompanion, SharedRefreshResponse, SharedRefreshResponseCompanion, SharedRefreshResponseError, SharedRefreshResponseErrorCompanion, SharedRegisterDeviceRequest, SharedRegisterDeviceRequestCompanion, SharedRegisterDeviceResponse, SharedRegisterDeviceResponseCompanion, SharedRegisterDeviceType, SharedRegisterDeviceTypeCompanion, SharedRegisterError, SharedRegisterErrorCompanion, SharedSettingsByAppKeyRequest, SharedSettingsByAppKeyRequestCompanion, SharedSettingsResponse, SharedSettingsResponseCompanion, SharedToken, SharedTokenCompanion, SharedTokenError, SharedTokenErrorCompanion, SharedTokenPayload, SharedTokenPayloadCompanion, SharedUpdateDeviceData, SharedUpdateDeviceDataCompanion, SharedUpdateDeviceRequest, SharedUpdateDeviceRequestCompanion, SharedUpdateTokenDeviceRequest, SharedUpdateTokenDeviceRequestCompanion, SharedUpdateTokenDeviceResponse, SharedUpdateTokenDeviceResponseCompanion, SharedUserResponse, SharedUserResponseCompanion, SharedWebUser, SharedWebUserCompanion, SharedWebUserCredentials, SharedWebUserCredentialsCompanion, SharedWebUserCredentialsData, SharedWebUserCredentialsDataCompanion, SharedWebUserData, SharedWebUserDataCompanion, SharedGetLeafletsRequest, SharedGetLeafletsRequestCompanion, SharedGetLeafletsResponse, SharedGetLeafletsResponseCompanion, SharedGetLeafletsResponseLeaflets, SharedGetLeafletsResponseLeafletsCompanion, SharedGetMostOpenedLeafletsRequest, SharedGetMostOpenedLeafletsRequestCompanion, SharedGetMostOpenedLeafletsResponse, SharedGetMostOpenedLeafletsResponseCompanion, SharedGetMostOpenedLeafletsResponseOpenedLeaflet, SharedGetMostOpenedLeafletsResponseOpenedLeafletCompanion, SharedGetMostOpenedLeafletsResponseOpenedLeaflets, SharedGetMostOpenedLeafletsResponseOpenedLeafletsCompanion, SharedGrpcAnalyticsClient, SharedGrpcPublicClient, SharedLeaflet, SharedLeafletCompanion, SharedWire_runtimeMessage<M, B>, SharedWire_runtimeMessageBuilder<M, B>, SharedWire_runtimeProtoAdapter<E>, SharedWire_runtimeProtoAdapterCompanion, SharedWire_runtimeInstant, SharedWire_runtimeFieldEncoding, SharedWire_runtimeFieldEncodingCompanion, SharedWire_runtimeSyntax, SharedWire_runtimeSyntaxCompanion, SharedWire_runtimeProtoReader, SharedWire_runtimeProtoReaderCompanion, SharedWire_runtimeProtoWriter, SharedWire_runtimeProtoWriterCompanion, SharedWire_runtimeReverseProtoWriter, SharedWire_runtimeDuration, SharedSkieColdFlowIterator<E>, SharedSkieKotlinFlow<T>, SharedSkieKotlinMutableSharedFlow<T>, SharedSkieKotlinMutableStateFlow<T>, SharedSkieKotlinOptionalFlow<T>, SharedSkieKotlinOptionalMutableSharedFlow<T>, SharedSkieKotlinOptionalMutableStateFlow<T>, SharedSkieKotlinOptionalSharedFlow<T>, SharedSkieKotlinOptionalStateFlow<T>, SharedSkieKotlinSharedFlow<T>, SharedSkieKotlinStateFlow<T>, SharedSkie_CancellationHandler, SharedSkie_SuspendHandler, SharedSkie_SuspendResult, SharedSkie_SuspendResultCanceled, SharedSkie_SuspendResultError, SharedSkie_SuspendResultSuccess, SharedGreeting, SharedIOSPlatform, SharedKmpApplication, SharedSwiftType, SharedPlatform_iosKt, SharedSharedModuleKt, SharedDIHelpersKt, SharedNativeModuleKt, SharedHomescreenTestClass, SharedDefaultHomescreenComponent, SharedDefaultRootComponent, SharedRootComponentChild, SharedRootComponentChildHomescreenChild, SharedHomescreenUILogicModuleKt, SharedChild<C, T>, SharedChildCreated<C, T>, SharedChildDestroyed<C>, SharedDefaultComponentContext, SharedRef<T>, SharedApplicationLifecycle, SharedMergedLifecycle, SharedChildNavStateStatus, SharedSimpleChildNavState<C>, SharedSimpleNavigation<T>, SharedChildOverlay<C, T>, SharedOverlayNavigationSourceEvent<C>, SharedChildPages<C, T>, SharedPages<C>, SharedPagesNavigationSourceEvent<C>, SharedChildSlot<C, T>, SharedSlotNavigationSourceEvent<C>, SharedChildStack<C, T>, SharedStackNavigationSourceEvent<C>, SharedMutableValue<T>, SharedValue<T>, SharedObserveLifecycleMode, SharedComponentContextExtKt, SharedUtilsKt, SharedErrorHandlersKt, SharedChildrenFactoryKt, SharedOverlayNavigationKt, SharedOverlayNavigatorExtKt, SharedChildOverlayFactoryKt, SharedPagesNavigationKt, SharedChildPagesFactoryKt, SharedPagesNavigatorExtKt, SharedSlotNavigationKt, SharedSlotNavigatorExtKt, SharedChildSlotFactoryKt, SharedStackNavigationKt, SharedStackNavigatorExtKt, SharedChildStackFactoryKt, SharedMutableValueBuilderKt, SharedLifecycleState, SharedLifecycleRegistryKt, SharedLifecycleRegistryExtKt, SharedLifecycleExtKt, SharedBack_handlerBackCallback, SharedBack_handlerBackCallbackCompanion, SharedBack_handlerBackEvent, SharedBack_handlerBackEventSwipeEdge, SharedOkioByteString, SharedOkioByteStringCompanion, SharedOkioBuffer, SharedOkioBufferUnsafeCursor, SharedOkioIOException, SharedOkioTimeout, SharedOkioTimeoutCompanion, SharedWire_grpc_clientGrpcClient, SharedWire_grpc_clientGrpcMethod<S, R>, SharedKoin_coreModule, SharedKoin_coreKoinApplication, SharedKoin_coreKoinApplicationCompanion, SharedKoin_coreParametersHolder, SharedKoin_coreScope, SharedKoin_coreLockable, SharedKoin_coreKoinDefinition<R>, SharedKoin_coreInstanceFactory<T>, SharedKoin_coreInstanceFactoryCompanion, SharedKoin_coreSingleInstanceFactory<T>, SharedKoin_coreScopeDSL, SharedKoin_coreLogger, SharedKoin_coreLevel, SharedKoin_coreKoin, SharedKoin_coreBeanDefinition<T>, SharedKoin_coreInstanceContext, SharedKoin_coreExtensionManager, SharedKoin_coreInstanceRegistry, SharedKoin_corePropertyRegistry, SharedKoin_coreScopeRegistry, SharedKoin_coreScopeRegistryCompanion, SharedKoin_coreKind, SharedKoin_coreCallbacks<T>, SharedKotlinx_serialization_corePolymorphicKind, SharedKotlinx_serialization_corePolymorphicKindOPEN, SharedKotlinx_serialization_corePolymorphicKindSEALED, SharedKotlinx_serialization_coreSerialKind, SharedKotlinx_serialization_coreSerialKindCONTEXTUAL, SharedKotlinx_serialization_coreSerialKindENUM, SharedKotlinx_serialization_corePrimitiveKind, SharedKotlinx_serialization_corePrimitiveKindBOOLEAN, SharedKotlinx_serialization_corePrimitiveKindBYTE, SharedKotlinx_serialization_corePrimitiveKindCHAR, SharedKotlinx_serialization_corePrimitiveKindDOUBLE, SharedKotlinx_serialization_corePrimitiveKindFLOAT, SharedKotlinx_serialization_corePrimitiveKindINT, SharedKotlinx_serialization_corePrimitiveKindLONG, SharedKotlinx_serialization_corePrimitiveKindSHORT, SharedKotlinx_serialization_corePrimitiveKindSTRING, SharedKotlinx_serialization_coreStructureKind, SharedKotlinx_serialization_coreStructureKindCLASS, SharedKotlinx_serialization_coreStructureKindLIST, SharedKotlinx_serialization_coreStructureKindMAP, SharedKotlinx_serialization_coreStructureKindOBJECT, SharedKotlinx_serialization_coreSerializersModule, SharedStately_concurrencyThreadLocalRef<T>, Shared__SkieSuspendWrappersKt, Shared__SkieTypeExportsKt, NSObject, NSError, NSString, NSArray<E>, NSMutableArray<E>, NSSet<E>, NSDictionary<K, V>, NSMutableSet, NSMutableDictionary, NSNumber, NSData;

@protocol SharedKotlinComparable, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedKotlinKProperty, SharedKotlinKCallable, SharedKotlinIterator, SharedKotlinKType, SharedKotlinLazy, SharedKotlinCoroutineContext, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContextKey, SharedKotlinAnnotation, SharedDeviceEventsClient, SharedLeafletCallBackClient, SharedLeafletSuspendClient, SharedRegisterDeviceRepository, SharedDeviceAdminClient, SharedDeviceRegistrationClient, SharedDeviceServiceClient, SharedIdentityServiceClient, SharedProjectSettingsAdminClient, SharedProjectSettingsServiceClient, SharedWebUsersPrivateServiceClient, SharedWebUsersPrivateServiceV2Client, SharedWebUsersServiceClient, SharedAnalyticsClient, SharedPublicClient, SharedWire_runtimeWireEnum, SharedWire_runtimeService, SharedWire_runtimeMessageSink, SharedWire_runtimeMessageSource, SharedSkie_DispatcherDelegate, SharedKotlinx_coroutines_coreFlow, SharedKotlinx_coroutines_coreMutableSharedFlow, SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector, SharedKotlinx_coroutines_coreMutableStateFlow, SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreRunnable, SharedKotlinx_coroutines_coreReceiveChannel, SharedKotlinx_coroutines_coreChannelIterator, SharedKotlinx_coroutines_coreSendChannel, SharedKotlinx_coroutines_coreSelectClause0, SharedKotlinx_coroutines_coreSelectClause, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinx_coroutines_coreSelectClause1, SharedKotlinx_coroutines_coreSelectClause2, SharedKotlinx_coroutines_coreSelectInstance, SharedKotlinx_coroutines_coreDisposableHandle, SharedPlatform, SharedNativeTestDependency, SharedHomescreenComponent, SharedRootComponent, SharedComponentContext, SharedCancellation, SharedChildNavState, SharedNavState, SharedNavigationSource, SharedOverlayNavigation, SharedOverlayNavigator, SharedOverlayNavigationSource, SharedPagesNavigation, SharedPagesNavigator, SharedPagesNavigationSource, SharedSlotNavigation, SharedSlotNavigator, SharedSlotNavigationSource, SharedStackNavigation, SharedStackNavigator, SharedStackNavigationSource, SharedWebHistoryController, SharedLifecycleOwner, SharedLifecycle, SharedLifecycleCallbacks, SharedLifecycleRegistry, SharedState_keeperStateKeeperOwner, SharedState_keeperStateKeeper, SharedInstance_keeperInstanceKeeperOwner, SharedInstance_keeperInstanceKeeper, SharedInstance_keeperInstanceKeeperInstance, SharedBack_handlerBackHandlerOwner, SharedBack_handlerBackHandler, SharedOkioBufferedSink, SharedOkioSink, SharedOkioCloseable, SharedOkioBufferedSource, SharedOkioSource, SharedWire_grpc_clientGrpcCall, SharedWire_grpc_clientGrpcCallCallback, SharedWire_grpc_clientGrpcStreamingCall, SharedKoin_coreQualifier, SharedKoin_coreScopeCallback, SharedKoin_coreKoinScopeComponent, SharedKoin_coreKoinComponent, SharedKoin_coreKoinExtension, SharedRuntimeParcelable, SharedParcelableParcelableContainer, SharedKotlinx_serialization_coreKSerializer, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinx_serialization_coreSerializersModuleCollector, NSCopying, NSSecureCoding;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

typedef id<SharedKoin_coreQualifier> _Nonnull Skie__TypeDef__0__id_SharedKoin_coreQualifier_ __attribute__((__swift_private__));
typedef id<SharedKoin_coreKoinExtension> _Nonnull Skie__TypeDef__1__id_SharedKoin_coreKoinExtension_ __attribute__((__swift_private__));
typedef id<SharedKoin_coreKoinExtension> _Nullable Skie__TypeDef__2__id_SharedKoin_coreKoinExtension___Nullable __attribute__((__swift_private__));

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
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Wire_runtimeMessage")))
@interface SharedWire_runtimeMessage<M, B> : SharedBase
@property (readonly) SharedWire_runtimeProtoAdapter<M> *adapter __attribute__((swift_name("adapter")));
@property int32_t hashCode __attribute__((swift_name("hashCode")));
@property (readonly) SharedOkioByteString *unknownFields __attribute__((swift_name("unknownFields")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<M> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinByteArray *)encode __attribute__((swift_name("encode()")));
- (void)encodeSink:(id<SharedOkioBufferedSink>)sink __attribute__((swift_name("encode(sink:)")));
- (SharedOkioByteString *)encodeByteString __attribute__((swift_name("encodeByteString()")));
- (B)doNewBuilder __attribute__((swift_name("doNewBuilder()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address")))
@interface SharedAddress : SharedWire_runtimeMessage<SharedAddress *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedAddressCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSString *address2 __attribute__((swift_name("address2")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) SharedLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *zipCode __attribute__((swift_name("zipCode")));
- (instancetype)initWithAddress:(NSString *)address address2:(NSString *)address2 city:(NSString *)city zipCode:(NSString *)zipCode country:(NSString *)country location:(SharedLocation * _Nullable)location unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(address:address2:city:zipCode:country:location:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedAddress *)doCopyAddress:(NSString *)address address2:(NSString *)address2 city:(NSString *)city zipCode:(NSString *)zipCode country:(NSString *)country location:(SharedLocation * _Nullable)location unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(address:address2:city:zipCode:country:location:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Companion")))
@interface SharedAddressCompanion : SharedBase
@property (class, readonly, getter=shared) SharedAddressCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddress *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Wire_runtimeWireEnum")))
@protocol SharedWire_runtimeWireEnum
@required
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface SharedCurrency : SharedKotlinEnum<SharedCurrency *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedCurrencyCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedCurrency *currencyUnknown __attribute__((swift_name("currencyUnknown")));
@property (class, readonly) SharedCurrency *czk __attribute__((swift_name("czk")));
@property (class, readonly) SharedCurrency *eur __attribute__((swift_name("eur")));
@property (class, readonly) SharedCurrency *usd __attribute__((swift_name("usd")));
@property (class, readonly) NSArray<SharedCurrency *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedCurrency *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface SharedCurrencyCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCurrencyCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCurrency *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedCurrency * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorBackwardPagingParams")))
@interface SharedCursorBackwardPagingParams : SharedWire_runtimeMessage<SharedCursorBackwardPagingParams *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCursorBackwardPagingParamsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable before __attribute__((swift_name("before")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
- (instancetype)initWithBefore:(NSString * _Nullable)before first:(int32_t)first unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(before:first:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCursorBackwardPagingParams *)doCopyBefore:(NSString * _Nullable)before first:(int32_t)first unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(before:first:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorBackwardPagingParams.Companion")))
@interface SharedCursorBackwardPagingParamsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCursorBackwardPagingParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCursorBackwardPagingParams *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorForwardPagingParams")))
@interface SharedCursorForwardPagingParams : SharedWire_runtimeMessage<SharedCursorForwardPagingParams *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCursorForwardPagingParamsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable after __attribute__((swift_name("after")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
- (instancetype)initWithAfter:(NSString * _Nullable)after first:(int32_t)first unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(after:first:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCursorForwardPagingParams *)doCopyAfter:(NSString * _Nullable)after first:(int32_t)first unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(after:first:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorForwardPagingParams.Companion")))
@interface SharedCursorForwardPagingParamsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCursorForwardPagingParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCursorForwardPagingParams *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("File")))
@interface SharedFile : SharedWire_runtimeMessage<SharedFile *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedFileCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedOkioByteString *content __attribute__((swift_name("content")));
@property (readonly) NSString *mimeType __attribute__((swift_name("mimeType")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name mimeType:(NSString *)mimeType content:(SharedOkioByteString *)content unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(name:mimeType:content:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedFile *)doCopyName:(NSString *)name mimeType:(NSString *)mimeType content:(SharedOkioByteString *)content unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(name:mimeType:content:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("File.Companion")))
@interface SharedFileCompanion : SharedBase
@property (class, readonly, getter=shared) SharedFileCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedFile *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexColor")))
@interface SharedHexColor : SharedWire_runtimeMessage<SharedHexColor *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedHexColorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
- (instancetype)initWithValue_:(NSString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(value_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedHexColor *)doCopyValue_:(NSString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(value_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexColor.Companion")))
@interface SharedHexColorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedHexColorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedHexColor *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface SharedLanguage : SharedKotlinEnum<SharedLanguage *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedLanguageCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedLanguage *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedLanguage *cs __attribute__((swift_name("cs")));
@property (class, readonly) SharedLanguage *sk __attribute__((swift_name("sk")));
@property (class, readonly) SharedLanguage *en __attribute__((swift_name("en")));
@property (class, readonly) NSArray<SharedLanguage *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedLanguage *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.Companion")))
@interface SharedLanguageCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLanguageCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLanguage *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedLanguage * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface SharedLocation : SharedWire_runtimeMessage<SharedLocation *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedLocationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(latitude:longitude:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLocation *)doCopyLatitude:(double)latitude longitude:(double)longitude unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(latitude:longitude:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface SharedLocationCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLocationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLocation *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageInfo")))
@interface SharedPageInfo : SharedWire_runtimeMessage<SharedPageInfo *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedPageInfoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL hasNext __attribute__((swift_name("hasNext")));
@property (readonly) int64_t totalCount __attribute__((swift_name("totalCount")));
- (instancetype)initWithHasNext:(BOOL)hasNext totalCount:(int64_t)totalCount unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(hasNext:totalCount:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedPageInfo *)doCopyHasNext:(BOOL)hasNext totalCount:(int64_t)totalCount unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(hasNext:totalCount:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageInfo.Companion")))
@interface SharedPageInfoCompanion : SharedBase
@property (class, readonly, getter=shared) SharedPageInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedPageInfo *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingParams")))
@interface SharedPagingParams : SharedWire_runtimeMessage<SharedPagingParams *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedPagingParamsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedCursorBackwardPagingParams * _Nullable backward __attribute__((swift_name("backward")));
@property (readonly) SharedCursorForwardPagingParams * _Nullable forward __attribute__((swift_name("forward")));
- (instancetype)initWithForward:(SharedCursorForwardPagingParams * _Nullable)forward backward:(SharedCursorBackwardPagingParams * _Nullable)backward unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(forward:backward:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedPagingParams *)doCopyForward:(SharedCursorForwardPagingParams * _Nullable)forward backward:(SharedCursorBackwardPagingParams * _Nullable)backward unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(forward:backward:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagingParams.Companion")))
@interface SharedPagingParamsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedPagingParamsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedPagingParams *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Picture")))
@interface SharedPicture : SharedWire_runtimeMessage<SharedPicture *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedPictureCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
- (instancetype)initWithId:(NSString *)id url:(NSString *)url height:(int32_t)height width:(int32_t)width unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(id:url:height:width:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedPicture *)doCopyId:(NSString *)id url:(NSString *)url height:(int32_t)height width:(int32_t)width unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(id:url:height:width:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Picture.Companion")))
@interface SharedPictureCompanion : SharedBase
@property (class, readonly, getter=shared) SharedPictureCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedPicture *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceValue")))
@interface SharedPriceValue : SharedWire_runtimeMessage<SharedPriceValue *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedPriceValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t value_ __attribute__((swift_name("value_")));
- (instancetype)initWithValue_:(int64_t)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(value_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedPriceValue *)doCopyValue_:(int64_t)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(value_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceValue.Companion")))
@interface SharedPriceValueCompanion : SharedBase
@property (class, readonly, getter=shared) SharedPriceValueCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedPriceValue *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemVer")))
@interface SharedSemVer : SharedWire_runtimeMessage<SharedSemVer *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedSemVerCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *build __attribute__((swift_name("build")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) int32_t patch __attribute__((swift_name("patch")));
@property (readonly) NSString *preRelease __attribute__((swift_name("preRelease")));
- (instancetype)initWithMajor:(int32_t)major minor:(int32_t)minor patch:(int32_t)patch preRelease:(NSString *)preRelease build:(NSString *)build unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(major:minor:patch:preRelease:build:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedSemVer *)doCopyMajor:(int32_t)major minor:(int32_t)minor patch:(int32_t)patch preRelease:(NSString *)preRelease build:(NSString *)build unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(major:minor:patch:preRelease:build:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemVer.Companion")))
@interface SharedSemVerCompanion : SharedBase
@property (class, readonly, getter=shared) SharedSemVerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedSemVer *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder")))
@interface SharedSortOrder : SharedKotlinEnum<SharedSortOrder *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedSortOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedSortOrder *unknownSort __attribute__((swift_name("unknownSort")));
@property (class, readonly) SharedSortOrder *asc __attribute__((swift_name("asc")));
@property (class, readonly) SharedSortOrder *desc __attribute__((swift_name("desc")));
@property (class, readonly) NSArray<SharedSortOrder *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedSortOrder *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder.Companion")))
@interface SharedSortOrderCompanion : SharedBase
@property (class, readonly, getter=shared) SharedSortOrderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedSortOrder *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedSortOrder * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeRange")))
@interface SharedTimeRange : SharedWire_runtimeMessage<SharedTimeRange *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedTimeRangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWire_runtimeInstant * _Nullable from __attribute__((swift_name("from")));
@property (readonly) SharedWire_runtimeInstant * _Nullable to __attribute__((swift_name("to")));
- (instancetype)initWithFrom:(SharedWire_runtimeInstant * _Nullable)from to:(SharedWire_runtimeInstant * _Nullable)to unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(from:to:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedTimeRange *)doCopyFrom:(SharedWire_runtimeInstant * _Nullable)from to:(SharedWire_runtimeInstant * _Nullable)to unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(from:to:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeRange.Companion")))
@interface SharedTimeRangeCompanion : SharedBase
@property (class, readonly, getter=shared) SharedTimeRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedTimeRange *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEvent")))
@interface SharedDeviceEvent : SharedWire_runtimeMessage<SharedDeviceEvent *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDeviceEventCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWire_runtimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) SharedDeviceEventType *type __attribute__((swift_name("type")));
- (instancetype)initWithId:(NSString *)id type:(SharedDeviceEventType *)type text:(NSString *)text createdAt:(SharedWire_runtimeInstant * _Nullable)createdAt unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(id:type:text:createdAt:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDeviceEvent *)doCopyId:(NSString *)id type:(SharedDeviceEventType *)type text:(NSString *)text createdAt:(SharedWire_runtimeInstant * _Nullable)createdAt unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(id:type:text:createdAt:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEvent.Companion")))
@interface SharedDeviceEventCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceEventCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceEvent *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEventType")))
@interface SharedDeviceEventType : SharedKotlinEnum<SharedDeviceEventType *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedDeviceEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedDeviceEventType *unknownDeviceEventType __attribute__((swift_name("unknownDeviceEventType")));
@property (class, readonly) SharedDeviceEventType *logout __attribute__((swift_name("logout")));
@property (class, readonly) NSArray<SharedDeviceEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedDeviceEventType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEventType.Companion")))
@interface SharedDeviceEventTypeCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceEventTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceEventType *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedDeviceEventType * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEventsArray")))
@interface SharedDeviceEventsArray : SharedWire_runtimeMessage<SharedDeviceEventsArray *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDeviceEventsArrayCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedDeviceEvent *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSArray<SharedDeviceEvent *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDeviceEventsArray *)doCopyData_:(NSArray<SharedDeviceEvent *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceEventsArray.Companion")))
@interface SharedDeviceEventsArrayCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceEventsArrayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceEventsArray *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Wire_runtimeService")))
@protocol SharedWire_runtimeService
@required
@end

__attribute__((swift_name("DeviceEventsClient")))
@protocol SharedDeviceEventsClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetDeviceEvents __attribute__((swift_name("GetDeviceEvents()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceEventsRequest")))
@interface SharedGetDeviceEventsRequest : SharedWire_runtimeMessage<SharedGetDeviceEventsRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetDeviceEventsRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token size:(int32_t)size unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:size:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetDeviceEventsRequest *)doCopyToken:(SharedToken * _Nullable)token size:(int32_t)size unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:size:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceEventsRequest.Companion")))
@interface SharedGetDeviceEventsRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetDeviceEventsRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetDeviceEventsRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceEventsResponse")))
@interface SharedGetDeviceEventsResponse : SharedWire_runtimeMessage<SharedGetDeviceEventsResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetDeviceEventsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedDeviceEventsArray * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedTokenError * _Nullable tokenErr __attribute__((swift_name("tokenErr")));
- (instancetype)initWithTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedDeviceEventsArray * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(tokenErr:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetDeviceEventsResponse *)doCopyTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedDeviceEventsArray * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(tokenErr:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceEventsResponse.Companion")))
@interface SharedGetDeviceEventsResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetDeviceEventsResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetDeviceEventsResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcDeviceEventsClient")))
@interface SharedGrpcDeviceEventsClient : SharedBase <SharedDeviceEventsClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetDeviceEvents __attribute__((swift_name("GetDeviceEvents()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface SharedSkieColdFlowIterator<E> : SharedBase
- (instancetype)initWithFlow:(id<SharedKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface SharedSkieKotlinFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SharedKotlinx_coroutines_coreSharedFlow <SharedKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SharedKotlinx_coroutines_coreMutableSharedFlow <SharedKotlinx_coroutines_coreSharedFlow, SharedKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface SharedSkieKotlinMutableSharedFlow<T> : SharedBase <SharedKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SharedKotlinx_coroutines_coreStateFlow <SharedKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SharedKotlinx_coroutines_coreMutableStateFlow <SharedKotlinx_coroutines_coreStateFlow, SharedKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface SharedSkieKotlinMutableStateFlow<T> : SharedBase <SharedKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property (setter=setValue:) T value_ __attribute__((swift_name("value_")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface SharedSkieKotlinOptionalFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface SharedSkieKotlinOptionalMutableSharedFlow<T> : SharedBase <SharedKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface SharedSkieKotlinOptionalMutableStateFlow<T> : SharedBase <SharedKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SharedKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property (setter=setValue:) T _Nullable value_ __attribute__((swift_name("value_")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface SharedSkieKotlinOptionalSharedFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface SharedSkieKotlinOptionalStateFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value_ __attribute__((swift_name("value_")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface SharedSkieKotlinSharedFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface SharedSkieKotlinStateFlow<__covariant T> : SharedBase <SharedKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value_ __attribute__((swift_name("value_")));
- (instancetype)initWithDelegate:(id<SharedKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface SharedSkie_CancellationHandler : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol SharedSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface SharedSkie_SuspendHandler : SharedBase
- (instancetype)initWithCancellationHandler:(SharedSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<SharedSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(SharedSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface SharedSkie_SuspendResult : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface SharedSkie_SuspendResultCanceled : SharedSkie_SuspendResult
@property (class, readonly, getter=shared) SharedSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface SharedSkie_SuspendResultError : SharedSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (SharedSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface SharedSkie_SuspendResultSuccess : SharedSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (SharedSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("LeafletCallBackClient")))
@protocol SharedLeafletCallBackClient
@required
- (void)getLeafletsRequest:(SharedGetLeafletsRequest *)request responseCallback:(void (^)(SharedGetLeafletsResponse * _Nullable, SharedKotlinException * _Nullable))responseCallback __attribute__((swift_name("getLeaflets(request:responseCallback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeafletRepository")))
@interface SharedLeafletRepository : SharedBase
- (instancetype)initWithLeafletClient:(id<SharedLeafletSuspendClient>)leafletClient __attribute__((swift_name("init(leafletClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeafletsWithCompletionHandler:(void (^)(SharedGetLeafletsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaflets(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeafletsWithTokenToken:(NSString *)token completionHandler:(void (^)(SharedGetLeafletsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeafletsWithToken(token:completionHandler:)")));
@end

__attribute__((swift_name("LeafletSuspendClient")))
@protocol SharedLeafletSuspendClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeafletsRequest:(SharedGetLeafletsRequest *)request completionHandler:(void (^)(SharedGetLeafletsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaflets(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeafletSuspendClientImpl")))
@interface SharedLeafletSuspendClientImpl : SharedBase <SharedLeafletSuspendClient>
- (instancetype)initWithCallBackClient:(id<SharedLeafletCallBackClient>)callBackClient __attribute__((swift_name("init(callBackClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeafletsRequest:(SharedGetLeafletsRequest *)request completionHandler:(void (^)(SharedGetLeafletsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaflets(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObjectId")))
@interface SharedObjectId : SharedWire_runtimeMessage<SharedObjectId *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedObjectIdCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedOkioByteString *value_ __attribute__((swift_name("value_")));
- (instancetype)initWithValue_:(SharedOkioByteString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(value_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedObjectId *)doCopyValue_:(SharedOkioByteString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(value_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObjectId.Companion")))
@interface SharedObjectIdCompanion : SharedBase
@property (class, readonly, getter=shared) SharedObjectIdCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedObjectId *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("RegisterDeviceRepository")))
@protocol SharedRegisterDeviceRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerDeviceWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("registerDevice(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UUID")))
@interface SharedUUID : SharedWire_runtimeMessage<SharedUUID *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUUIDCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedOkioByteString *value_ __attribute__((swift_name("value_")));
- (instancetype)initWithValue_:(SharedOkioByteString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(value_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUUID *)doCopyValue_:(SharedOkioByteString *)value_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(value_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UUID.Companion")))
@interface SharedUUIDCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUUIDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUUID *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekDay")))
@interface SharedWeekDay : SharedKotlinEnum<SharedWeekDay *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedWeekDay *unknownWeekDay __attribute__((swift_name("unknownWeekDay")));
@property (class, readonly) SharedWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedWeekDay *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) NSArray<SharedWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedWeekDay *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekDay.Companion")))
@interface SharedWeekDayCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWeekDayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWeekDay *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedWeekDay * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateSettingsRequest")))
@interface SharedAddOrUpdateSettingsRequest : SharedWire_runtimeMessage<SharedAddOrUpdateSettingsRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedAddOrUpdateSettingsRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedProjectSettings * _Nullable data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(SharedProjectSettings * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedAddOrUpdateSettingsRequest *)doCopyData_:(SharedProjectSettings * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateSettingsRequest.Companion")))
@interface SharedAddOrUpdateSettingsRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedAddOrUpdateSettingsRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddOrUpdateSettingsRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserRequest")))
@interface SharedAddOrUpdateUserRequest : SharedWire_runtimeMessage<SharedAddOrUpdateUserRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedAddOrUpdateUserRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWebUser * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(user:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedAddOrUpdateUserRequest *)doCopyUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(user:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserRequest.Companion")))
@interface SharedAddOrUpdateUserRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedAddOrUpdateUserRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddOrUpdateUserRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserRequestV2")))
@interface SharedAddOrUpdateUserRequestV2 : SharedWire_runtimeMessage<SharedAddOrUpdateUserRequestV2 *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedAddOrUpdateUserRequestV2Companion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWebUser * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(user:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedAddOrUpdateUserRequestV2 *)doCopyUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(user:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserRequestV2.Companion")))
@interface SharedAddOrUpdateUserRequestV2Companion : SharedBase
@property (class, readonly, getter=shared) SharedAddOrUpdateUserRequestV2Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddOrUpdateUserRequestV2 *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserResponseV2")))
@interface SharedAddOrUpdateUserResponseV2 : SharedWire_runtimeMessage<SharedAddOrUpdateUserResponseV2 *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedAddOrUpdateUserResponseV2Companion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedAddOrUpdateUserResponseV2AddUserError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) SharedWebUser * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithUser:(SharedWebUser * _Nullable)user error:(SharedAddOrUpdateUserResponseV2AddUserError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(user:error:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedAddOrUpdateUserResponseV2 *)doCopyUser:(SharedWebUser * _Nullable)user error:(SharedAddOrUpdateUserResponseV2AddUserError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(user:error:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserResponseV2.AddUserError")))
@interface SharedAddOrUpdateUserResponseV2AddUserError : SharedKotlinEnum<SharedAddOrUpdateUserResponseV2AddUserError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedAddOrUpdateUserResponseV2AddUserErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedAddOrUpdateUserResponseV2AddUserError *unknownAddUserError __attribute__((swift_name("unknownAddUserError")));
@property (class, readonly) SharedAddOrUpdateUserResponseV2AddUserError *duplicatedEmail __attribute__((swift_name("duplicatedEmail")));
@property (class, readonly) NSArray<SharedAddOrUpdateUserResponseV2AddUserError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedAddOrUpdateUserResponseV2AddUserError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserResponseV2.AddUserErrorCompanion")))
@interface SharedAddOrUpdateUserResponseV2AddUserErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedAddOrUpdateUserResponseV2AddUserErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddOrUpdateUserResponseV2AddUserError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedAddOrUpdateUserResponseV2AddUserError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddOrUpdateUserResponseV2.Companion")))
@interface SharedAddOrUpdateUserResponseV2Companion : SharedBase
@property (class, readonly, getter=shared) SharedAddOrUpdateUserResponseV2Companion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedAddOrUpdateUserResponseV2 *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest")))
@interface SharedCreateRequest : SharedWire_runtimeMessage<SharedCreateRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable appKey __attribute__((swift_name("appKey")));
@property (readonly) SharedCreateRequestCredentials * _Nullable credentials __attribute__((swift_name("credentials")));
@property (readonly) SharedCreateRequestUserLoginToken * _Nullable defaultLoginToken __attribute__((swift_name("defaultLoginToken")));
@property (readonly) SharedCreateRequestDeviceKey * _Nullable deviceKey __attribute__((swift_name("deviceKey")));
@property (readonly) SharedCreateRequestProjectUserLoginToken * _Nullable loginToken __attribute__((swift_name("loginToken")));
- (instancetype)initWithCredentials:(SharedCreateRequestCredentials * _Nullable)credentials appKey:(NSString * _Nullable)appKey loginToken:(SharedCreateRequestProjectUserLoginToken * _Nullable)loginToken deviceKey:(SharedCreateRequestDeviceKey * _Nullable)deviceKey defaultLoginToken:(SharedCreateRequestUserLoginToken * _Nullable)defaultLoginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(credentials:appKey:loginToken:deviceKey:defaultLoginToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateRequest *)doCopyCredentials:(SharedCreateRequestCredentials * _Nullable)credentials appKey:(NSString * _Nullable)appKey loginToken:(SharedCreateRequestProjectUserLoginToken * _Nullable)loginToken deviceKey:(SharedCreateRequestDeviceKey * _Nullable)deviceKey defaultLoginToken:(SharedCreateRequestUserLoginToken * _Nullable)defaultLoginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(credentials:appKey:loginToken:deviceKey:defaultLoginToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.Companion")))
@interface SharedCreateRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.Credentials")))
@interface SharedCreateRequestCredentials : SharedWire_runtimeMessage<SharedCreateRequestCredentials *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateRequestCredentialsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *pass __attribute__((swift_name("pass")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
- (instancetype)initWithUsername:(NSString *)username pass:(NSString *)pass unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(username:pass:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateRequestCredentials *)doCopyUsername:(NSString *)username pass:(NSString *)pass unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(username:pass:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.CredentialsCompanion")))
@interface SharedCreateRequestCredentialsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateRequestCredentialsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateRequestCredentials *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.DeviceKey")))
@interface SharedCreateRequestDeviceKey : SharedWire_runtimeMessage<SharedCreateRequestDeviceKey *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateRequestDeviceKeyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *appKey __attribute__((swift_name("appKey")));
@property (readonly) NSString *deviceUuid __attribute__((swift_name("deviceUuid")));
- (instancetype)initWithAppKey:(NSString *)appKey deviceUuid:(NSString *)deviceUuid unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(appKey:deviceUuid:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateRequestDeviceKey *)doCopyAppKey:(NSString *)appKey deviceUuid:(NSString *)deviceUuid unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(appKey:deviceUuid:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.DeviceKeyCompanion")))
@interface SharedCreateRequestDeviceKeyCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateRequestDeviceKeyCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateRequestDeviceKey *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.ProjectUserLoginToken")))
@interface SharedCreateRequestProjectUserLoginToken : SharedWire_runtimeMessage<SharedCreateRequestProjectUserLoginToken *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateRequestProjectUserLoginTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *loginToken __attribute__((swift_name("loginToken")));
@property (readonly) NSString *projectId __attribute__((swift_name("projectId")));
- (instancetype)initWithLoginToken:(NSString *)loginToken projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(loginToken:projectId:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateRequestProjectUserLoginToken *)doCopyLoginToken:(NSString *)loginToken projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(loginToken:projectId:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.ProjectUserLoginTokenCompanion")))
@interface SharedCreateRequestProjectUserLoginTokenCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateRequestProjectUserLoginTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateRequestProjectUserLoginToken *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.UserLoginToken")))
@interface SharedCreateRequestUserLoginToken : SharedWire_runtimeMessage<SharedCreateRequestUserLoginToken *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateRequestUserLoginTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *loginToken __attribute__((swift_name("loginToken")));
- (instancetype)initWithLoginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(loginToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateRequestUserLoginToken *)doCopyLoginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(loginToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRequest.UserLoginTokenCompanion")))
@interface SharedCreateRequestUserLoginTokenCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateRequestUserLoginTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateRequestUserLoginToken *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateResponse")))
@interface SharedCreateResponse : SharedWire_runtimeMessage<SharedCreateResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedCreateResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedTokenPayload * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedCreateResponseError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithData_:(SharedTokenPayload * _Nullable)data_ error:(SharedCreateResponseError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:error:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedCreateResponse *)doCopyData_:(SharedTokenPayload * _Nullable)data_ error:(SharedCreateResponseError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:error:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateResponse.Companion")))
@interface SharedCreateResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateResponse.Error")))
@interface SharedCreateResponseError : SharedKotlinEnum<SharedCreateResponseError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedCreateResponseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedCreateResponseError *unspecified __attribute__((swift_name("unspecified")));
@property (class, readonly) SharedCreateResponseError *wrongPayload __attribute__((swift_name("wrongPayload")));
@property (class, readonly) NSArray<SharedCreateResponseError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedCreateResponseError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateResponse.ErrorCompanion")))
@interface SharedCreateResponseErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedCreateResponseErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedCreateResponseError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedCreateResponseError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteUserRequest")))
@interface SharedDeleteUserRequest : SharedWire_runtimeMessage<SharedDeleteUserRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDeleteUserRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedLong *> *userIds __attribute__((swift_name("userIds")));
- (instancetype)initWithUserIds:(NSArray<SharedLong *> *)userIds unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(userIds:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDeleteUserRequest *)doCopyUserIds:(NSArray<SharedLong *> *)userIds unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(userIds:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteUserRequest.Companion")))
@interface SharedDeleteUserRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeleteUserRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeleteUserRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("DeviceAdminClient")))
@protocol SharedDeviceAdminClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetDevice __attribute__((swift_name("GetDevice()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetDeviceByTemporaryId __attribute__((swift_name("GetDeviceByTemporaryId()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetDevices __attribute__((swift_name("GetDevices()")));
- (id<SharedWire_grpc_clientGrpcStreamingCall>)GetProjectDevices __attribute__((swift_name("GetProjectDevices()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUsersDevices __attribute__((swift_name("GetUsersDevices()")));
- (id<SharedWire_grpc_clientGrpcCall>)LogoutUsers __attribute__((swift_name("LogoutUsers()")));
- (id<SharedWire_grpc_clientGrpcCall>)UpdateDevice __attribute__((swift_name("UpdateDevice()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceData")))
@interface SharedDeviceData : SharedWire_runtimeMessage<SharedDeviceData *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDeviceDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *deviceTemporaryId __attribute__((swift_name("deviceTemporaryId")));
@property (readonly) SharedDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) int32_t idCustomer __attribute__((swift_name("idCustomer")));
@property (readonly) SharedLong * _Nullable idMobileUser __attribute__((swift_name("idMobileUser")));
@property (readonly) SharedDeviceLang *lang __attribute__((swift_name("lang")));
@property (readonly) NSString * _Nullable notificationToken __attribute__((swift_name("notificationToken")));
@property (readonly) SharedWire_runtimeInstant * _Nullable notificationTokenLastUpdate __attribute__((swift_name("notificationTokenLastUpdate")));
@property (readonly) SharedWire_runtimeInstant * _Nullable timeCreate __attribute__((swift_name("timeCreate")));
- (instancetype)initWithIdCustomer:(int32_t)idCustomer deviceTemporaryId:(NSString *)deviceTemporaryId timeCreate:(SharedWire_runtimeInstant * _Nullable)timeCreate lang:(SharedDeviceLang *)lang deviceType:(SharedDeviceType *)deviceType idMobileUser:(SharedLong * _Nullable)idMobileUser notificationToken:(NSString * _Nullable)notificationToken notificationTokenLastUpdate:(SharedWire_runtimeInstant * _Nullable)notificationTokenLastUpdate unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idCustomer:deviceTemporaryId:timeCreate:lang:deviceType:idMobileUser:notificationToken:notificationTokenLastUpdate:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDeviceData *)doCopyIdCustomer:(int32_t)idCustomer deviceTemporaryId:(NSString *)deviceTemporaryId timeCreate:(SharedWire_runtimeInstant * _Nullable)timeCreate lang:(SharedDeviceLang *)lang deviceType:(SharedDeviceType *)deviceType idMobileUser:(SharedLong * _Nullable)idMobileUser notificationToken:(NSString * _Nullable)notificationToken notificationTokenLastUpdate:(SharedWire_runtimeInstant * _Nullable)notificationTokenLastUpdate unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idCustomer:deviceTemporaryId:timeCreate:lang:deviceType:idMobileUser:notificationToken:notificationTokenLastUpdate:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceData.Companion")))
@interface SharedDeviceDataCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceData *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceLang")))
@interface SharedDeviceLang : SharedKotlinEnum<SharedDeviceLang *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedDeviceLangCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedDeviceLang *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedDeviceLang *en __attribute__((swift_name("en")));
@property (class, readonly) SharedDeviceLang *sk __attribute__((swift_name("sk")));
@property (class, readonly) SharedDeviceLang *cz __attribute__((swift_name("cz")));
@property (class, readonly) NSArray<SharedDeviceLang *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedDeviceLang *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceLang.Companion")))
@interface SharedDeviceLangCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceLangCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceLang *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedDeviceLang * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("DeviceRegistrationClient")))
@protocol SharedDeviceRegistrationClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)RegisterDevice __attribute__((swift_name("RegisterDevice()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceResponse")))
@interface SharedDeviceResponse : SharedWire_runtimeMessage<SharedDeviceResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDeviceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedMobileDevice * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedDeviceResponseError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithError:(SharedDeviceResponseError * _Nullable)error data_:(SharedMobileDevice * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDeviceResponse *)doCopyError:(SharedDeviceResponseError * _Nullable)error data_:(SharedMobileDevice * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceResponse.Companion")))
@interface SharedDeviceResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceResponse.Error")))
@interface SharedDeviceResponseError : SharedKotlinEnum<SharedDeviceResponseError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedDeviceResponseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedDeviceResponseError *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedDeviceResponseError *notFound __attribute__((swift_name("notFound")));
@property (class, readonly) NSArray<SharedDeviceResponseError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedDeviceResponseError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceResponse.ErrorCompanion")))
@interface SharedDeviceResponseErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceResponseErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceResponseError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedDeviceResponseError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("DeviceServiceClient")))
@protocol SharedDeviceServiceClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetTokenDevice __attribute__((swift_name("GetTokenDevice()")));
- (id<SharedWire_grpc_clientGrpcCall>)LogoutUser __attribute__((swift_name("LogoutUser()")));
- (id<SharedWire_grpc_clientGrpcCall>)UpdateTokenDevice __attribute__((swift_name("UpdateTokenDevice()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType")))
@interface SharedDeviceType : SharedKotlinEnum<SharedDeviceType *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedDeviceType *unknownDeviceType __attribute__((swift_name("unknownDeviceType")));
@property (class, readonly) SharedDeviceType *androidV5 __attribute__((swift_name("androidV5")));
@property (class, readonly) SharedDeviceType *iosV5 __attribute__((swift_name("iosV5")));
@property (class, readonly) SharedDeviceType *webV1 __attribute__((swift_name("webV1")));
@property (class, readonly) NSArray<SharedDeviceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedDeviceType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceType.Companion")))
@interface SharedDeviceTypeCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDeviceType *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedDeviceType * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicesResponse")))
@interface SharedDevicesResponse : SharedWire_runtimeMessage<SharedDevicesResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedDevicesResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<SharedLong *, SharedMobileDevice *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSDictionary<SharedLong *, SharedMobileDevice *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedDevicesResponse *)doCopyData_:(NSDictionary<SharedLong *, SharedMobileDevice *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicesResponse.Companion")))
@interface SharedDevicesResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedDevicesResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDevicesResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirebaseConfigResponse")))
@interface SharedFirebaseConfigResponse : SharedWire_runtimeMessage<SharedFirebaseConfigResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedFirebaseConfigResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedOkioByteString * _Nullable configJson __attribute__((swift_name("configJson")));
- (instancetype)initWithConfigJson:(SharedOkioByteString * _Nullable)configJson unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(configJson:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedFirebaseConfigResponse *)doCopyConfigJson:(SharedOkioByteString * _Nullable)configJson unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(configJson:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirebaseConfigResponse.Companion")))
@interface SharedFirebaseConfigResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedFirebaseConfigResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedFirebaseConfigResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceByTemporaryIdRequest")))
@interface SharedGetDeviceByTemporaryIdRequest : SharedWire_runtimeMessage<SharedGetDeviceByTemporaryIdRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetDeviceByTemporaryIdRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *projectId __attribute__((swift_name("projectId")));
@property (readonly) NSString *temporaryId __attribute__((swift_name("temporaryId")));
- (instancetype)initWithTemporaryId:(NSString *)temporaryId projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(temporaryId:projectId:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetDeviceByTemporaryIdRequest *)doCopyTemporaryId:(NSString *)temporaryId projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(temporaryId:projectId:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceByTemporaryIdRequest.Companion")))
@interface SharedGetDeviceByTemporaryIdRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetDeviceByTemporaryIdRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetDeviceByTemporaryIdRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceRequest")))
@interface SharedGetDeviceRequest : SharedWire_runtimeMessage<SharedGetDeviceRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t idMobileDevice __attribute__((swift_name("idMobileDevice")));
- (instancetype)initWithIdMobileDevice:(int64_t)idMobileDevice unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idMobileDevice:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetDeviceRequest *)doCopyIdMobileDevice:(int64_t)idMobileDevice unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idMobileDevice:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDeviceRequest.Companion")))
@interface SharedGetDeviceRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetDeviceRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDevicesRequest")))
@interface SharedGetDevicesRequest : SharedWire_runtimeMessage<SharedGetDevicesRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetDevicesRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedLong *> *idMobileDevice __attribute__((swift_name("idMobileDevice")));
- (instancetype)initWithIdMobileDevice:(NSArray<SharedLong *> *)idMobileDevice unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idMobileDevice:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetDevicesRequest *)doCopyIdMobileDevice:(NSArray<SharedLong *> *)idMobileDevice unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idMobileDevice:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetDevicesRequest.Companion")))
@interface SharedGetDevicesRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetDevicesRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetDevicesRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenDeviceRequest")))
@interface SharedGetTokenDeviceRequest : SharedWire_runtimeMessage<SharedGetTokenDeviceRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetTokenDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetTokenDeviceRequest *)doCopyToken:(SharedToken * _Nullable)token unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenDeviceRequest.Companion")))
@interface SharedGetTokenDeviceRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetTokenDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetTokenDeviceRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenDeviceResponse")))
@interface SharedGetTokenDeviceResponse : SharedWire_runtimeMessage<SharedGetTokenDeviceResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetTokenDeviceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedMobileDevice * _Nullable device __attribute__((swift_name("device")));
@property (readonly) SharedTokenError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithError:(SharedTokenError * _Nullable)error device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:device:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetTokenDeviceResponse *)doCopyError:(SharedTokenError * _Nullable)error device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:device:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenDeviceResponse.Companion")))
@interface SharedGetTokenDeviceResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetTokenDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetTokenDeviceResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenUserResponse")))
@interface SharedGetTokenUserResponse : SharedWire_runtimeMessage<SharedGetTokenUserResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetTokenUserResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedTokenError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) SharedWebUser * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithError:(SharedTokenError * _Nullable)error user:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:user:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetTokenUserResponse *)doCopyError:(SharedTokenError * _Nullable)error user:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:user:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTokenUserResponse.Companion")))
@interface SharedGetTokenUserResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetTokenUserResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetTokenUserResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserForLoginRequest")))
@interface SharedGetUserForLoginRequest : SharedWire_runtimeMessage<SharedGetUserForLoginRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUserForLoginRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *login __attribute__((swift_name("login")));
- (instancetype)initWithLogin:(NSString *)login unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(login:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUserForLoginRequest *)doCopyLogin:(NSString *)login unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(login:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserForLoginRequest.Companion")))
@interface SharedGetUserForLoginRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUserForLoginRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUserForLoginRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserForLoginTokenRequest")))
@interface SharedGetUserForLoginTokenRequest : SharedWire_runtimeMessage<SharedGetUserForLoginTokenRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUserForLoginTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *loginToken __attribute__((swift_name("loginToken")));
- (instancetype)initWithLoginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(loginToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUserForLoginTokenRequest *)doCopyLoginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(loginToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserForLoginTokenRequest.Companion")))
@interface SharedGetUserForLoginTokenRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUserForLoginTokenRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUserForLoginTokenRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersDevicesRequest")))
@interface SharedGetUsersDevicesRequest : SharedWire_runtimeMessage<SharedGetUsersDevicesRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUsersDevicesRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedLong *> *users __attribute__((swift_name("users")));
- (instancetype)initWithUsers:(NSArray<SharedLong *> *)users unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(users:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUsersDevicesRequest *)doCopyUsers:(NSArray<SharedLong *> *)users unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(users:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersDevicesRequest.Companion")))
@interface SharedGetUsersDevicesRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUsersDevicesRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUsersDevicesRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersDevicesResponse")))
@interface SharedGetUsersDevicesResponse : SharedWire_runtimeMessage<SharedGetUsersDevicesResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUsersDevicesResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<SharedLong *, SharedMobileDevicesArray *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSDictionary<SharedLong *, SharedMobileDevicesArray *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUsersDevicesResponse *)doCopyData_:(NSDictionary<SharedLong *, SharedMobileDevicesArray *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersDevicesResponse.Companion")))
@interface SharedGetUsersDevicesResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUsersDevicesResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUsersDevicesResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersRequest")))
@interface SharedGetUsersRequest : SharedWire_runtimeMessage<SharedGetUsersRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUsersRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedLong *> *ids __attribute__((swift_name("ids")));
- (instancetype)initWithIds:(NSArray<SharedLong *> *)ids unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(ids:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUsersRequest *)doCopyIds:(NSArray<SharedLong *> *)ids unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(ids:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersRequest.Companion")))
@interface SharedGetUsersRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUsersRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUsersRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersResponse")))
@interface SharedGetUsersResponse : SharedWire_runtimeMessage<SharedGetUsersResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetUsersResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<SharedLong *, SharedWebUser *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSDictionary<SharedLong *, SharedWebUser *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetUsersResponse *)doCopyData_:(NSDictionary<SharedLong *, SharedWebUser *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUsersResponse.Companion")))
@interface SharedGetUsersResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetUsersResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetUsersResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcDeviceAdminClient")))
@interface SharedGrpcDeviceAdminClient : SharedBase <SharedDeviceAdminClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetDevice __attribute__((swift_name("GetDevice()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetDeviceByTemporaryId __attribute__((swift_name("GetDeviceByTemporaryId()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetDevices __attribute__((swift_name("GetDevices()")));
- (id<SharedWire_grpc_clientGrpcStreamingCall>)GetProjectDevices __attribute__((swift_name("GetProjectDevices()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUsersDevices __attribute__((swift_name("GetUsersDevices()")));
- (id<SharedWire_grpc_clientGrpcCall>)LogoutUsers __attribute__((swift_name("LogoutUsers()")));
- (id<SharedWire_grpc_clientGrpcCall>)UpdateDevice __attribute__((swift_name("UpdateDevice()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcDeviceRegistrationClient")))
@interface SharedGrpcDeviceRegistrationClient : SharedBase <SharedDeviceRegistrationClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)RegisterDevice __attribute__((swift_name("RegisterDevice()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcDeviceServiceClient")))
@interface SharedGrpcDeviceServiceClient : SharedBase <SharedDeviceServiceClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetTokenDevice __attribute__((swift_name("GetTokenDevice()")));
- (id<SharedWire_grpc_clientGrpcCall>)LogoutUser __attribute__((swift_name("LogoutUser()")));
- (id<SharedWire_grpc_clientGrpcCall>)UpdateTokenDevice __attribute__((swift_name("UpdateTokenDevice()")));
@end

__attribute__((swift_name("IdentityServiceClient")))
@protocol SharedIdentityServiceClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)Create __attribute__((swift_name("Create()")));
- (id<SharedWire_grpc_clientGrpcCall>)Refresh __attribute__((swift_name("Refresh()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcIdentityServiceClient")))
@interface SharedGrpcIdentityServiceClient : SharedBase <SharedIdentityServiceClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)Create __attribute__((swift_name("Create()")));
- (id<SharedWire_grpc_clientGrpcCall>)Refresh __attribute__((swift_name("Refresh()")));
@end

__attribute__((swift_name("ProjectSettingsAdminClient")))
@protocol SharedProjectSettingsAdminClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateSettings __attribute__((swift_name("AddOrUpdateSettings()")));
- (id<SharedWire_grpc_clientGrpcCall>)FirebaseConfig __attribute__((swift_name("FirebaseConfig()")));
- (id<SharedWire_grpc_clientGrpcCall>)Settings __attribute__((swift_name("Settings()")));
- (id<SharedWire_grpc_clientGrpcCall>)SettingsByAppKey __attribute__((swift_name("SettingsByAppKey()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcProjectSettingsAdminClient")))
@interface SharedGrpcProjectSettingsAdminClient : SharedBase <SharedProjectSettingsAdminClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateSettings __attribute__((swift_name("AddOrUpdateSettings()")));
- (id<SharedWire_grpc_clientGrpcCall>)FirebaseConfig __attribute__((swift_name("FirebaseConfig()")));
- (id<SharedWire_grpc_clientGrpcCall>)Settings __attribute__((swift_name("Settings()")));
- (id<SharedWire_grpc_clientGrpcCall>)SettingsByAppKey __attribute__((swift_name("SettingsByAppKey()")));
@end

__attribute__((swift_name("ProjectSettingsServiceClient")))
@protocol SharedProjectSettingsServiceClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetAllowedProjects __attribute__((swift_name("GetAllowedProjects()")));
- (id<SharedWire_grpc_clientGrpcCall>)ProjectSettings __attribute__((swift_name("ProjectSettings()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcProjectSettingsServiceClient")))
@interface SharedGrpcProjectSettingsServiceClient : SharedBase <SharedProjectSettingsServiceClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetAllowedProjects __attribute__((swift_name("GetAllowedProjects()")));
- (id<SharedWire_grpc_clientGrpcCall>)ProjectSettings __attribute__((swift_name("ProjectSettings()")));
@end

__attribute__((swift_name("WebUsersPrivateServiceClient")))
@protocol SharedWebUsersPrivateServiceClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateUser __attribute__((swift_name("AddOrUpdateUser()")));
- (id<SharedWire_grpc_clientGrpcCall>)DeleteUsers __attribute__((swift_name("DeleteUsers()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUserForLogin __attribute__((swift_name("GetUserForLogin()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUserForLoginToken __attribute__((swift_name("GetUserForLoginToken()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUsers __attribute__((swift_name("GetUsers()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcWebUsersPrivateServiceClient")))
@interface SharedGrpcWebUsersPrivateServiceClient : SharedBase <SharedWebUsersPrivateServiceClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateUser __attribute__((swift_name("AddOrUpdateUser()")));
- (id<SharedWire_grpc_clientGrpcCall>)DeleteUsers __attribute__((swift_name("DeleteUsers()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUserForLogin __attribute__((swift_name("GetUserForLogin()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUserForLoginToken __attribute__((swift_name("GetUserForLoginToken()")));
- (id<SharedWire_grpc_clientGrpcCall>)GetUsers __attribute__((swift_name("GetUsers()")));
@end

__attribute__((swift_name("WebUsersPrivateServiceV2Client")))
@protocol SharedWebUsersPrivateServiceV2Client <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateUser __attribute__((swift_name("AddOrUpdateUser()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcWebUsersPrivateServiceV2Client")))
@interface SharedGrpcWebUsersPrivateServiceV2Client : SharedBase <SharedWebUsersPrivateServiceV2Client>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)AddOrUpdateUser __attribute__((swift_name("AddOrUpdateUser()")));
@end

__attribute__((swift_name("WebUsersServiceClient")))
@protocol SharedWebUsersServiceClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetTokenUser __attribute__((swift_name("GetTokenUser()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcWebUsersServiceClient")))
@interface SharedGrpcWebUsersServiceClient : SharedBase <SharedWebUsersServiceClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetTokenUser __attribute__((swift_name("GetTokenUser()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUserRequest")))
@interface SharedLogoutUserRequest : SharedWire_runtimeMessage<SharedLogoutUserRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedLogoutUserRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLogoutUserRequest *)doCopyToken:(SharedToken * _Nullable)token unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUserRequest.Companion")))
@interface SharedLogoutUserRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLogoutUserRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLogoutUserRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUserResponse")))
@interface SharedLogoutUserResponse : SharedWire_runtimeMessage<SharedLogoutUserResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedLogoutUserResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedTokenError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithError:(SharedTokenError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLogoutUserResponse *)doCopyError:(SharedTokenError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUserResponse.Companion")))
@interface SharedLogoutUserResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLogoutUserResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLogoutUserResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUsersRequest")))
@interface SharedLogoutUsersRequest : SharedWire_runtimeMessage<SharedLogoutUsersRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedLogoutUsersRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@property (readonly) NSArray<SharedLong *> *userIds __attribute__((swift_name("userIds")));
- (instancetype)initWithUserIds:(NSArray<SharedLong *> *)userIds reason:(NSString *)reason unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(userIds:reason:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLogoutUsersRequest *)doCopyUserIds:(NSArray<SharedLong *> *)userIds reason:(NSString *)reason unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(userIds:reason:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUsersRequest.Companion")))
@interface SharedLogoutUsersRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLogoutUsersRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLogoutUsersRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobileDevice")))
@interface SharedMobileDevice : SharedWire_runtimeMessage<SharedMobileDevice *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedMobileDeviceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedDeviceData * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) int64_t idMobileDevice __attribute__((swift_name("idMobileDevice")));
- (instancetype)initWithIdMobileDevice:(int64_t)idMobileDevice data_:(SharedDeviceData * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idMobileDevice:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedMobileDevice *)doCopyIdMobileDevice:(int64_t)idMobileDevice data_:(SharedDeviceData * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idMobileDevice:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobileDevice.Companion")))
@interface SharedMobileDeviceCompanion : SharedBase
@property (class, readonly, getter=shared) SharedMobileDeviceCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedMobileDevice *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobileDevicesArray")))
@interface SharedMobileDevicesArray : SharedWire_runtimeMessage<SharedMobileDevicesArray *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedMobileDevicesArrayCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedMobileDevice *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSArray<SharedMobileDevice *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedMobileDevicesArray *)doCopyData_:(NSArray<SharedMobileDevice *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobileDevicesArray.Companion")))
@interface SharedMobileDevicesArrayCompanion : SharedBase
@property (class, readonly, getter=shared) SharedMobileDevicesArrayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedMobileDevicesArray *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionError")))
@interface SharedPermissionError : SharedKotlinEnum<SharedPermissionError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedPermissionErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedPermissionError *unknownPermissionError __attribute__((swift_name("unknownPermissionError")));
@property (class, readonly) SharedPermissionError *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) NSArray<SharedPermissionError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedPermissionError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionError.Companion")))
@interface SharedPermissionErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedPermissionErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedPermissionError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedPermissionError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectRequest")))
@interface SharedProjectRequest : SharedWire_runtimeMessage<SharedProjectRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedProjectRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *projectId __attribute__((swift_name("projectId")));
- (instancetype)initWithProjectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(projectId:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedProjectRequest *)doCopyProjectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(projectId:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectRequest.Companion")))
@interface SharedProjectRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedProjectRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedProjectRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettings")))
@interface SharedProjectSettings : SharedWire_runtimeMessage<SharedProjectSettings *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedProjectSettingsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *applicationKey __attribute__((swift_name("applicationKey")));
@property (readonly) NSString *applicationName __attribute__((swift_name("applicationName")));
@property (readonly) SharedWire_runtimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable googleKey __attribute__((swift_name("googleKey")));
@property (readonly) NSString *projectId __attribute__((swift_name("projectId")));
- (instancetype)initWithProjectId:(NSString *)projectId applicationKey:(NSString *)applicationKey applicationName:(NSString *)applicationName googleKey:(NSString * _Nullable)googleKey createdAt:(SharedWire_runtimeInstant * _Nullable)createdAt unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(projectId:applicationKey:applicationName:googleKey:createdAt:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedProjectSettings *)doCopyProjectId:(NSString *)projectId applicationKey:(NSString *)applicationKey applicationName:(NSString *)applicationName googleKey:(NSString * _Nullable)googleKey createdAt:(SharedWire_runtimeInstant * _Nullable)createdAt unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(projectId:applicationKey:applicationName:googleKey:createdAt:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettings.Companion")))
@interface SharedProjectSettingsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedProjectSettingsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedProjectSettings *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettingsArray")))
@interface SharedProjectSettingsArray : SharedWire_runtimeMessage<SharedProjectSettingsArray *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedProjectSettingsArrayCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedProjectSettings *> *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSArray<SharedProjectSettings *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedProjectSettingsArray *)doCopyData_:(NSArray<SharedProjectSettings *> *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettingsArray.Companion")))
@interface SharedProjectSettingsArrayCompanion : SharedBase
@property (class, readonly, getter=shared) SharedProjectSettingsArrayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedProjectSettingsArray *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettingsRequest")))
@interface SharedProjectSettingsRequest : SharedWire_runtimeMessage<SharedProjectSettingsRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedProjectSettingsRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *projectIds __attribute__((swift_name("projectIds")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token projectIds:(NSArray<NSString *> *)projectIds unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:projectIds:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedProjectSettingsRequest *)doCopyToken:(SharedToken * _Nullable)token projectIds:(NSArray<NSString *> *)projectIds unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:projectIds:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectSettingsRequest.Companion")))
@interface SharedProjectSettingsRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedProjectSettingsRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedProjectSettingsRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectsResponse")))
@interface SharedProjectsResponse : SharedWire_runtimeMessage<SharedProjectsResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedProjectsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedProjectSettingsArray * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedTokenError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithError:(SharedTokenError * _Nullable)error data_:(SharedProjectSettingsArray * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedProjectsResponse *)doCopyError:(SharedTokenError * _Nullable)error data_:(SharedProjectSettingsArray * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectsResponse.Companion")))
@interface SharedProjectsResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedProjectsResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedProjectsResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshRequest")))
@interface SharedRefreshRequest : SharedWire_runtimeMessage<SharedRefreshRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedRefreshRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
- (instancetype)initWithRefreshToken:(NSString *)refreshToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(refreshToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedRefreshRequest *)doCopyRefreshToken:(NSString *)refreshToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(refreshToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshRequest.Companion")))
@interface SharedRefreshRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRefreshRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRefreshRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshResponse")))
@interface SharedRefreshResponse : SharedWire_runtimeMessage<SharedRefreshResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedRefreshResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedTokenPayload * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedRefreshResponseError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithData_:(SharedTokenPayload * _Nullable)data_ error:(SharedRefreshResponseError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:error:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedRefreshResponse *)doCopyData_:(SharedTokenPayload * _Nullable)data_ error:(SharedRefreshResponseError * _Nullable)error unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:error:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshResponse.Companion")))
@interface SharedRefreshResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRefreshResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRefreshResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshResponse.Error")))
@interface SharedRefreshResponseError : SharedKotlinEnum<SharedRefreshResponseError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedRefreshResponseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedRefreshResponseError *unspecified __attribute__((swift_name("unspecified")));
@property (class, readonly) SharedRefreshResponseError *invalidToken __attribute__((swift_name("invalidToken")));
@property (class, readonly) NSArray<SharedRefreshResponseError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedRefreshResponseError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RefreshResponse.ErrorCompanion")))
@interface SharedRefreshResponseErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRefreshResponseErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRefreshResponseError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedRefreshResponseError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceRequest")))
@interface SharedRegisterDeviceRequest : SharedWire_runtimeMessage<SharedRegisterDeviceRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedRegisterDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *appKey __attribute__((swift_name("appKey")));
@property (readonly) SharedDeviceLang *lang __attribute__((swift_name("lang")));
@property (readonly) SharedRegisterDeviceType *type __attribute__((swift_name("type")));
@property (readonly) NSString *uniqId __attribute__((swift_name("uniqId")));
- (instancetype)initWithAppKey:(NSString *)appKey uniqId:(NSString *)uniqId type:(SharedRegisterDeviceType *)type lang:(SharedDeviceLang *)lang unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(appKey:uniqId:type:lang:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedRegisterDeviceRequest *)doCopyAppKey:(NSString *)appKey uniqId:(NSString *)uniqId type:(SharedRegisterDeviceType *)type lang:(SharedDeviceLang *)lang unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(appKey:uniqId:type:lang:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceRequest.Companion")))
@interface SharedRegisterDeviceRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRegisterDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRegisterDeviceRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceResponse")))
@interface SharedRegisterDeviceResponse : SharedWire_runtimeMessage<SharedRegisterDeviceResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedRegisterDeviceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedMobileDevice * _Nullable device __attribute__((swift_name("device")));
@property (readonly) SharedRegisterError * _Nullable err __attribute__((swift_name("err")));
- (instancetype)initWithErr:(SharedRegisterError * _Nullable)err device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(err:device:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedRegisterDeviceResponse *)doCopyErr:(SharedRegisterError * _Nullable)err device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(err:device:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceResponse.Companion")))
@interface SharedRegisterDeviceResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRegisterDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRegisterDeviceResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceType")))
@interface SharedRegisterDeviceType : SharedKotlinEnum<SharedRegisterDeviceType *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedRegisterDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedRegisterDeviceType *unknownRegisterType __attribute__((swift_name("unknownRegisterType")));
@property (class, readonly) SharedRegisterDeviceType *registerAndroidV5 __attribute__((swift_name("registerAndroidV5")));
@property (class, readonly) SharedRegisterDeviceType *registerIosV5 __attribute__((swift_name("registerIosV5")));
@property (class, readonly) SharedRegisterDeviceType *registerWebV1 __attribute__((swift_name("registerWebV1")));
@property (class, readonly) NSArray<SharedRegisterDeviceType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedRegisterDeviceType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterDeviceType.Companion")))
@interface SharedRegisterDeviceTypeCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRegisterDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRegisterDeviceType *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedRegisterDeviceType * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterError")))
@interface SharedRegisterError : SharedKotlinEnum<SharedRegisterError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedRegisterErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedRegisterError *unknownRegisterError __attribute__((swift_name("unknownRegisterError")));
@property (class, readonly) SharedRegisterError *uniqueIdAlreadyRegistered __attribute__((swift_name("uniqueIdAlreadyRegistered")));
@property (class, readonly) SharedRegisterError *accountSettingsNotFound __attribute__((swift_name("accountSettingsNotFound")));
@property (class, readonly) NSArray<SharedRegisterError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedRegisterError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegisterError.Companion")))
@interface SharedRegisterErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedRegisterErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedRegisterError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedRegisterError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsByAppKeyRequest")))
@interface SharedSettingsByAppKeyRequest : SharedWire_runtimeMessage<SharedSettingsByAppKeyRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedSettingsByAppKeyRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *appKey __attribute__((swift_name("appKey")));
- (instancetype)initWithAppKey:(NSString *)appKey unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(appKey:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedSettingsByAppKeyRequest *)doCopyAppKey:(NSString *)appKey unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(appKey:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsByAppKeyRequest.Companion")))
@interface SharedSettingsByAppKeyRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedSettingsByAppKeyRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedSettingsByAppKeyRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsResponse")))
@interface SharedSettingsResponse : SharedWire_runtimeMessage<SharedSettingsResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedSettingsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedProjectSettings * _Nullable settings __attribute__((swift_name("settings")));
- (instancetype)initWithSettings:(SharedProjectSettings * _Nullable)settings unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(settings:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedSettingsResponse *)doCopySettings:(SharedProjectSettings * _Nullable)settings unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(settings:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsResponse.Companion")))
@interface SharedSettingsResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedSettingsResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedSettingsResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Token")))
@interface SharedToken : SharedWire_runtimeMessage<SharedToken *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *data_ __attribute__((swift_name("data_")));
- (instancetype)initWithData_:(NSString *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedToken *)doCopyData_:(NSString *)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Token.Companion")))
@interface SharedTokenCompanion : SharedBase
@property (class, readonly, getter=shared) SharedTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedToken *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenError")))
@interface SharedTokenError : SharedKotlinEnum<SharedTokenError *> <SharedWire_runtimeWireEnum>
@property (class, readonly, getter=companion) SharedTokenErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedTokenError *unknownTokenError __attribute__((swift_name("unknownTokenError")));
@property (class, readonly) SharedTokenError *invalidToken __attribute__((swift_name("invalidToken")));
@property (class, readonly) NSArray<SharedTokenError *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedTokenError *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenError.Companion")))
@interface SharedTokenErrorCompanion : SharedBase
@property (class, readonly, getter=shared) SharedTokenErrorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedTokenError *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedTokenError * _Nullable)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenPayload")))
@interface SharedTokenPayload : SharedWire_runtimeMessage<SharedTokenPayload *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedTokenPayloadCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *refreshToken __attribute__((swift_name("refreshToken")));
- (instancetype)initWithRefreshToken:(NSString *)refreshToken accessToken:(NSString *)accessToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(refreshToken:accessToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedTokenPayload *)doCopyRefreshToken:(NSString *)refreshToken accessToken:(NSString *)accessToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(refreshToken:accessToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenPayload.Companion")))
@interface SharedTokenPayloadCompanion : SharedBase
@property (class, readonly, getter=shared) SharedTokenPayloadCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedTokenPayload *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateDeviceData")))
@interface SharedUpdateDeviceData : SharedWire_runtimeMessage<SharedUpdateDeviceData *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUpdateDeviceDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedLong * _Nullable idMobileUser __attribute__((swift_name("idMobileUser")));
- (instancetype)initWithIdMobileUser:(SharedLong * _Nullable)idMobileUser unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idMobileUser:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUpdateDeviceData *)doCopyIdMobileUser:(SharedLong * _Nullable)idMobileUser unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idMobileUser:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateDeviceData.Companion")))
@interface SharedUpdateDeviceDataCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUpdateDeviceDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUpdateDeviceData *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateDeviceRequest")))
@interface SharedUpdateDeviceRequest : SharedWire_runtimeMessage<SharedUpdateDeviceRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUpdateDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedUpdateDeviceData * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) int64_t idMobileDevice __attribute__((swift_name("idMobileDevice")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
- (instancetype)initWithIdMobileDevice:(int64_t)idMobileDevice data_:(SharedUpdateDeviceData * _Nullable)data_ reason:(NSString *)reason unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idMobileDevice:data_:reason:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUpdateDeviceRequest *)doCopyIdMobileDevice:(int64_t)idMobileDevice data_:(SharedUpdateDeviceData * _Nullable)data_ reason:(NSString *)reason unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idMobileDevice:data_:reason:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateDeviceRequest.Companion")))
@interface SharedUpdateDeviceRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUpdateDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUpdateDeviceRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTokenDeviceRequest")))
@interface SharedUpdateTokenDeviceRequest : SharedWire_runtimeMessage<SharedUpdateTokenDeviceRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUpdateTokenDeviceRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedDeviceLang *lang __attribute__((swift_name("lang")));
@property (readonly) NSString * _Nullable notificationToken __attribute__((swift_name("notificationToken")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token lang:(SharedDeviceLang *)lang notificationToken:(NSString * _Nullable)notificationToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:lang:notificationToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUpdateTokenDeviceRequest *)doCopyToken:(SharedToken * _Nullable)token lang:(SharedDeviceLang *)lang notificationToken:(NSString * _Nullable)notificationToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:lang:notificationToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTokenDeviceRequest.Companion")))
@interface SharedUpdateTokenDeviceRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUpdateTokenDeviceRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUpdateTokenDeviceRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTokenDeviceResponse")))
@interface SharedUpdateTokenDeviceResponse : SharedWire_runtimeMessage<SharedUpdateTokenDeviceResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUpdateTokenDeviceResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedMobileDevice * _Nullable device __attribute__((swift_name("device")));
@property (readonly) SharedTokenError * _Nullable error __attribute__((swift_name("error")));
- (instancetype)initWithError:(SharedTokenError * _Nullable)error device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(error:device:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUpdateTokenDeviceResponse *)doCopyError:(SharedTokenError * _Nullable)error device:(SharedMobileDevice * _Nullable)device unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(error:device:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateTokenDeviceResponse.Companion")))
@interface SharedUpdateTokenDeviceResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUpdateTokenDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUpdateTokenDeviceResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserResponse")))
@interface SharedUserResponse : SharedWire_runtimeMessage<SharedUserResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedUserResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWebUser * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(user:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedUserResponse *)doCopyUser:(SharedWebUser * _Nullable)user unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(user:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserResponse.Companion")))
@interface SharedUserResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedUserResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedUserResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUser")))
@interface SharedWebUser : SharedWire_runtimeMessage<SharedWebUser *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedWebUserCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWebUserCredentials * _Nullable credentials __attribute__((swift_name("credentials")));
@property (readonly) SharedWebUserData * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) int64_t idUser __attribute__((swift_name("idUser")));
- (instancetype)initWithIdUser:(int64_t)idUser data_:(SharedWebUserData * _Nullable)data_ credentials:(SharedWebUserCredentials * _Nullable)credentials unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idUser:data_:credentials:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedWebUser *)doCopyIdUser:(int64_t)idUser data_:(SharedWebUserData * _Nullable)data_ credentials:(SharedWebUserCredentials * _Nullable)credentials unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idUser:data_:credentials:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUser.Companion")))
@interface SharedWebUserCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWebUserCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWebUser *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserCredentials")))
@interface SharedWebUserCredentials : SharedWire_runtimeMessage<SharedWebUserCredentials *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedWebUserCredentialsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedWebUserCredentialsData * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) int64_t idCredentials __attribute__((swift_name("idCredentials")));
- (instancetype)initWithIdCredentials:(int64_t)idCredentials data_:(SharedWebUserCredentialsData * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(idCredentials:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedWebUserCredentials *)doCopyIdCredentials:(int64_t)idCredentials data_:(SharedWebUserCredentialsData * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(idCredentials:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserCredentials.Companion")))
@interface SharedWebUserCredentialsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWebUserCredentialsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWebUserCredentials *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserCredentialsData")))
@interface SharedWebUserCredentialsData : SharedWire_runtimeMessage<SharedWebUserCredentialsData *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedWebUserCredentialsDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *login __attribute__((swift_name("login")));
@property (readonly) NSString *loginToken __attribute__((swift_name("loginToken")));
@property (readonly) NSString *pass __attribute__((swift_name("pass")));
- (instancetype)initWithLogin:(NSString *)login pass:(NSString *)pass loginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(login:pass:loginToken:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedWebUserCredentialsData *)doCopyLogin:(NSString *)login pass:(NSString *)pass loginToken:(NSString *)loginToken unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(login:pass:loginToken:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserCredentialsData.Companion")))
@interface SharedWebUserCredentialsDataCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWebUserCredentialsDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWebUserCredentialsData *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserData")))
@interface SharedWebUserData : SharedWire_runtimeMessage<SharedWebUserData *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedWebUserDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *projectId __attribute__((swift_name("projectId")));
@property (readonly) NSString *surname __attribute__((swift_name("surname")));
- (instancetype)initWithName:(NSString *)name surname:(NSString *)surname projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(name:surname:projectId:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedWebUserData *)doCopyName:(NSString *)name surname:(NSString *)surname projectId:(NSString *)projectId unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(name:surname:projectId:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebUserData.Companion")))
@interface SharedWebUserDataCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWebUserDataCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWebUserData *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
- (NSString *)greetTwo __attribute__((swift_name("greetTwo()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpApplication")))
@interface SharedKmpApplication : SharedBase
@property (class, readonly, getter=shared) SharedKmpApplication *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmpApplication __attribute__((swift_name("init()")));
- (void)doInitSharedModuleNativeModule:(SharedKoin_coreModule *)nativeModule appDeclaration:(void (^ _Nullable)(SharedKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitSharedModule(nativeModule:appDeclaration:)")));
- (void)test __attribute__((swift_name("test()")));
@end

__attribute__((swift_name("NativeTestDependency")))
@protocol SharedNativeTestDependency
@required
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwiftType")))
@interface SharedSwiftType : SharedBase
@property (readonly) id<SharedKotlinKClass> swiftClazz __attribute__((swift_name("swiftClazz")));
@property (readonly) id type __attribute__((swift_name("type")));
- (instancetype)initWithType:(id)type swiftClazz:(id<SharedKotlinKClass>)swiftClazz __attribute__((swift_name("init(type:swiftClazz:)"))) __attribute__((objc_designated_initializer));
- (SharedSwiftType *)doCopyType:(id)type swiftClazz:(id<SharedKotlinKClass>)swiftClazz __attribute__((swift_name("doCopy(type:swiftClazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomescreenTestClass")))
@interface SharedHomescreenTestClass : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("HomescreenComponent")))
@protocol SharedHomescreenComponent
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultHomescreenComponent")))
@interface SharedDefaultHomescreenComponent : SharedBase <SharedHomescreenComponent>
- (instancetype)initWithComponentContext:(id<SharedComponentContext>)componentContext __attribute__((swift_name("init(componentContext:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("RootComponent")))
@protocol SharedRootComponent
@required
- (void)onBackClickedToIndex:(int32_t)toIndex __attribute__((swift_name("onBackClicked(toIndex:)")));
@property (readonly) SharedValue<SharedChildStack<id, SharedRootComponentChild *> *> *stack __attribute__((swift_name("stack")));
@end

__attribute__((swift_name("LifecycleOwner")))
@protocol SharedLifecycleOwner
@required
@property (readonly) id<SharedLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@end

__attribute__((swift_name("State_keeperStateKeeperOwner")))
@protocol SharedState_keeperStateKeeperOwner
@required
@property (readonly) id<SharedState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeperOwner")))
@protocol SharedInstance_keeperInstanceKeeperOwner
@required
@property (readonly) id<SharedInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@end

__attribute__((swift_name("Back_handlerBackHandlerOwner")))
@protocol SharedBack_handlerBackHandlerOwner
@required
@property (readonly) id<SharedBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@end

__attribute__((swift_name("ComponentContext")))
@protocol SharedComponentContext <SharedLifecycleOwner, SharedState_keeperStateKeeperOwner, SharedInstance_keeperInstanceKeeperOwner, SharedBack_handlerBackHandlerOwner>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultRootComponent")))
@interface SharedDefaultRootComponent : SharedBase <SharedRootComponent, SharedComponentContext>
@property (readonly) id<SharedBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@property (readonly) id<SharedInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@property (readonly) id<SharedLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@property (readonly) SharedValue<SharedChildStack<id, SharedRootComponentChild *> *> *stack __attribute__((swift_name("stack")));
@property (readonly) id<SharedState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
- (instancetype)initWithComponentContext:(id<SharedComponentContext>)componentContext __attribute__((swift_name("init(componentContext:)"))) __attribute__((objc_designated_initializer));
- (void)onBackClickedToIndex:(int32_t)toIndex __attribute__((swift_name("onBackClicked(toIndex:)")));
@end

__attribute__((swift_name("RootComponentChild")))
@interface SharedRootComponentChild : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootComponentChild.HomescreenChild")))
@interface SharedRootComponentChildHomescreenChild : SharedRootComponentChild
@property (readonly) id<SharedHomescreenComponent> component __attribute__((swift_name("component")));
- (instancetype)initWithComponent:(id<SharedHomescreenComponent>)component __attribute__((swift_name("init(component:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Cancellation")))
@protocol SharedCancellation
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Child")))
@interface SharedChild<__covariant C, __covariant T> : SharedBase
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) T _Nullable instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildCreated")))
@interface SharedChildCreated<__covariant C, __covariant T> : SharedChild<C, T>
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) T instance __attribute__((swift_name("instance")));
- (instancetype)initWithConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("init(configuration:instance:)"))) __attribute__((objc_designated_initializer));
- (SharedChildCreated<C, T> *)doCopyConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("doCopy(configuration:instance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildDestroyed")))
@interface SharedChildDestroyed<__covariant C> : SharedChild<C, SharedKotlinNothing *>
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) SharedKotlinNothing * _Nullable instance __attribute__((swift_name("instance")));
- (instancetype)initWithConfiguration:(C)configuration __attribute__((swift_name("init(configuration:)"))) __attribute__((objc_designated_initializer));
- (SharedChildDestroyed<C> *)doCopyConfiguration:(C)configuration __attribute__((swift_name("doCopy(configuration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultComponentContext")))
@interface SharedDefaultComponentContext : SharedBase <SharedComponentContext>
@property (readonly) id<SharedBack_handlerBackHandler> backHandler __attribute__((swift_name("backHandler")));
@property (readonly) id<SharedInstance_keeperInstanceKeeper> instanceKeeper __attribute__((swift_name("instanceKeeper")));
@property (readonly) id<SharedLifecycle> lifecycle __attribute__((swift_name("lifecycle")));
@property (readonly) id<SharedState_keeperStateKeeper> stateKeeper __attribute__((swift_name("stateKeeper")));
- (instancetype)initWithLifecycle:(id<SharedLifecycle>)lifecycle __attribute__((swift_name("init(lifecycle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLifecycle:(id<SharedLifecycle>)lifecycle stateKeeper:(id<SharedState_keeperStateKeeper> _Nullable)stateKeeper instanceKeeper:(id<SharedInstance_keeperInstanceKeeper> _Nullable)instanceKeeper backHandler:(id<SharedBack_handlerBackHandler> _Nullable)backHandler __attribute__((swift_name("init(lifecycle:stateKeeper:instanceKeeper:backHandler:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ref")))
@interface SharedRef<T> : SharedBase
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Lifecycle")))
@protocol SharedLifecycle
@required
- (void)subscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("subscribe(callbacks:)")));
- (void)unsubscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("unsubscribe(callbacks:)")));
@property (readonly) SharedLifecycleState *state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApplicationLifecycle")))
@interface SharedApplicationLifecycle : SharedBase <SharedLifecycle>
@property (readonly) SharedLifecycleState *state __attribute__((swift_name("state")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)subscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("subscribe(callbacks:)")));
- (void)unsubscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("unsubscribe(callbacks:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergedLifecycle")))
@interface SharedMergedLifecycle : SharedBase <SharedLifecycle>
@property (readonly) SharedLifecycleState *state __attribute__((swift_name("state")));
- (instancetype)initWithLifecycle1:(id<SharedLifecycle>)lifecycle1 lifecycle2:(id<SharedLifecycle>)lifecycle2 __attribute__((swift_name("init(lifecycle1:lifecycle2:)"))) __attribute__((objc_designated_initializer));
- (void)subscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("subscribe(callbacks:)")));
- (void)unsubscribeCallbacks:(id<SharedLifecycleCallbacks>)callbacks __attribute__((swift_name("unsubscribe(callbacks:)")));
@end

__attribute__((swift_name("ChildNavState")))
@protocol SharedChildNavState
@required
@property (readonly) id configuration __attribute__((swift_name("configuration")));
@property (readonly) SharedChildNavStateStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildNavStateStatus")))
@interface SharedChildNavStateStatus : SharedKotlinEnum<SharedChildNavStateStatus *>
@property (class, readonly) SharedChildNavStateStatus *destroyed __attribute__((swift_name("destroyed")));
@property (class, readonly) SharedChildNavStateStatus *inactive __attribute__((swift_name("inactive")));
@property (class, readonly) SharedChildNavStateStatus *active __attribute__((swift_name("active")));
@property (class, readonly) NSArray<SharedChildNavStateStatus *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedChildNavStateStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("NavState")))
@protocol SharedNavState
@required
@property (readonly) NSArray<id<SharedChildNavState>> *children __attribute__((swift_name("children")));
@end

__attribute__((swift_name("NavigationSource")))
@protocol SharedNavigationSource
@required
- (void)subscribeObserver:(void (^)(id))observer __attribute__((swift_name("subscribe(observer:)")));
- (void)unsubscribeObserver:(void (^)(id))observer __attribute__((swift_name("unsubscribe(observer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleChildNavState")))
@interface SharedSimpleChildNavState<__covariant C> : SharedBase <SharedChildNavState>
@property (readonly) C configuration __attribute__((swift_name("configuration")));
@property (readonly) SharedChildNavStateStatus *status __attribute__((swift_name("status")));
- (instancetype)initWithConfiguration:(C)configuration status:(SharedChildNavStateStatus *)status __attribute__((swift_name("init(configuration:status:)"))) __attribute__((objc_designated_initializer));
- (SharedSimpleChildNavState<C> *)doCopyConfiguration:(C)configuration status:(SharedChildNavStateStatus *)status __attribute__((swift_name("doCopy(configuration:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleNavigation")))
@interface SharedSimpleNavigation<T> : SharedBase <SharedNavigationSource>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)navigateEvent:(T)event __attribute__((swift_name("navigate(event:)")));
- (void)subscribeObserver:(void (^)(T))observer __attribute__((swift_name("subscribe(observer:)")));
- (void)unsubscribeObserver:(void (^)(T))observer __attribute__((swift_name("unsubscribe(observer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildOverlay")))
@interface SharedChildOverlay<__covariant C, __covariant T> : SharedBase
@property (readonly) SharedChildCreated<C, T> * _Nullable overlay __attribute__((swift_name("overlay")));
- (instancetype)initWithOverlay:(SharedChildCreated<C, T> * _Nullable)overlay __attribute__((swift_name("init(overlay:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Please use Child Slot API")));
- (SharedChildOverlay<C, T> *)doCopyOverlay:(SharedChildCreated<C, T> * _Nullable)overlay __attribute__((swift_name("doCopy(overlay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("OverlayNavigator")))
@protocol SharedOverlayNavigator
@required
- (void)navigateTransformer:(id _Nullable (^)(id _Nullable))transformer onComplete:(void (^)(id _Nullable, id _Nullable))onComplete __attribute__((swift_name("navigate(transformer:onComplete:)")));
@end

__attribute__((swift_name("OverlayNavigationSource")))
@protocol SharedOverlayNavigationSource <SharedNavigationSource>
@required
@end

__attribute__((swift_name("OverlayNavigation")))
@protocol SharedOverlayNavigation <SharedOverlayNavigator, SharedOverlayNavigationSource>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverlayNavigationSourceEvent")))
@interface SharedOverlayNavigationSourceEvent<C> : SharedBase
@property (readonly) void (^onComplete)(C _Nullable, C _Nullable) __attribute__((swift_name("onComplete")));
@property (readonly) C _Nullable (^transformer)(C _Nullable) __attribute__((swift_name("transformer")));
- (instancetype)initWithTransformer:(C _Nullable (^)(C _Nullable))transformer onComplete:(void (^)(C _Nullable, C _Nullable))onComplete __attribute__((swift_name("init(transformer:onComplete:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildPages")))
@interface SharedChildPages<__covariant C, __covariant T> : SharedBase
@property (readonly) NSArray<SharedChild<C, T> *> *items __attribute__((swift_name("items")));
@property (readonly) int32_t selectedIndex __attribute__((swift_name("selectedIndex")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithItems:(NSArray<SharedChild<C, T> *> *)items selectedIndex:(int32_t)selectedIndex __attribute__((swift_name("init(items:selectedIndex:)"))) __attribute__((objc_designated_initializer));
- (SharedChildPages<C, T> *)doCopyItems:(NSArray<SharedChild<C, T> *> *)items selectedIndex:(int32_t)selectedIndex __attribute__((swift_name("doCopy(items:selectedIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pages")))
@interface SharedPages<__covariant C> : SharedBase
@property (readonly) NSArray<C> *items __attribute__((swift_name("items")));
@property (readonly) int32_t selectedIndex __attribute__((swift_name("selectedIndex")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithItems:(NSArray<C> *)items selectedIndex:(int32_t)selectedIndex __attribute__((swift_name("init(items:selectedIndex:)"))) __attribute__((objc_designated_initializer));
- (SharedPages<C> *)doCopyItems:(NSArray<C> *)items selectedIndex:(int32_t)selectedIndex __attribute__((swift_name("doCopy(items:selectedIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("PagesNavigator")))
@protocol SharedPagesNavigator
@required
- (void)navigateTransformer:(SharedPages<id> *(^)(SharedPages<id> *))transformer onComplete_:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("navigate(transformer:onComplete_:)")));
@end

__attribute__((swift_name("PagesNavigationSource")))
@protocol SharedPagesNavigationSource <SharedNavigationSource>
@required
@end

__attribute__((swift_name("PagesNavigation")))
@protocol SharedPagesNavigation <SharedPagesNavigator, SharedPagesNavigationSource>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagesNavigationSourceEvent")))
@interface SharedPagesNavigationSourceEvent<C> : SharedBase
@property (readonly) void (^onComplete)(SharedPages<C> *, SharedPages<C> *) __attribute__((swift_name("onComplete")));
@property (readonly) SharedPages<C> *(^transformer)(SharedPages<C> *) __attribute__((swift_name("transformer")));
- (instancetype)initWithTransformer:(SharedPages<C> *(^)(SharedPages<C> *))transformer onComplete:(void (^)(SharedPages<C> *, SharedPages<C> *))onComplete __attribute__((swift_name("init(transformer:onComplete:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildSlot")))
@interface SharedChildSlot<__covariant C, __covariant T> : SharedBase
@property (readonly) SharedChildCreated<C, T> * _Nullable child __attribute__((swift_name("child")));
- (instancetype)initWithChild:(SharedChildCreated<C, T> * _Nullable)child __attribute__((swift_name("init(child:)"))) __attribute__((objc_designated_initializer));
- (SharedChildSlot<C, T> *)doCopyChild:(SharedChildCreated<C, T> * _Nullable)child __attribute__((swift_name("doCopy(child:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SlotNavigator")))
@protocol SharedSlotNavigator
@required
- (void)navigateTransformer:(id _Nullable (^)(id _Nullable))transformer onComplete__:(void (^)(id _Nullable, id _Nullable))onComplete __attribute__((swift_name("navigate(transformer:onComplete__:)")));
@end

__attribute__((swift_name("SlotNavigationSource")))
@protocol SharedSlotNavigationSource <SharedNavigationSource>
@required
@end

__attribute__((swift_name("SlotNavigation")))
@protocol SharedSlotNavigation <SharedSlotNavigator, SharedSlotNavigationSource>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlotNavigationSourceEvent")))
@interface SharedSlotNavigationSourceEvent<C> : SharedBase
@property (readonly) void (^onComplete)(C _Nullable, C _Nullable) __attribute__((swift_name("onComplete")));
@property (readonly) C _Nullable (^transformer)(C _Nullable) __attribute__((swift_name("transformer")));
- (instancetype)initWithTransformer:(C _Nullable (^)(C _Nullable))transformer onComplete:(void (^)(C _Nullable, C _Nullable))onComplete __attribute__((swift_name("init(transformer:onComplete:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildStack")))
@interface SharedChildStack<__covariant C, __covariant T> : SharedBase
@property (readonly) SharedChildCreated<C, T> *active __attribute__((swift_name("active")));
@property (readonly) NSArray<SharedChildCreated<C, T> *> *backStack __attribute__((swift_name("backStack")));
@property (readonly) NSArray<SharedChildCreated<C, T> *> *items __attribute__((swift_name("items")));
- (instancetype)initWithConfiguration:(C)configuration instance:(T)instance __attribute__((swift_name("init(configuration:instance:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(SharedChildCreated<C, T> *)active backStack:(NSArray<SharedChildCreated<C, T> *> *)backStack __attribute__((swift_name("init(active:backStack:)"))) __attribute__((objc_designated_initializer));
- (SharedChildStack<C, T> *)doCopyActive:(SharedChildCreated<C, T> *)active backStack:(NSArray<SharedChildCreated<C, T> *> *)backStack __attribute__((swift_name("doCopy(active:backStack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("StackNavigator")))
@protocol SharedStackNavigator
@required
- (void)navigateTransformer:(NSArray<id> *(^)(NSArray<id> *))transformer onComplete___:(void (^)(NSArray<id> *, NSArray<id> *))onComplete __attribute__((swift_name("navigate(transformer:onComplete___:)")));
@end

__attribute__((swift_name("StackNavigationSource")))
@protocol SharedStackNavigationSource <SharedNavigationSource>
@required
@end

__attribute__((swift_name("StackNavigation")))
@protocol SharedStackNavigation <SharedStackNavigator, SharedStackNavigationSource>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StackNavigationSourceEvent")))
@interface SharedStackNavigationSourceEvent<C> : SharedBase
@property (readonly) void (^onComplete)(NSArray<C> *, NSArray<C> *) __attribute__((swift_name("onComplete")));
@property (readonly) NSArray<C> *(^transformer)(NSArray<C> *) __attribute__((swift_name("transformer")));
- (instancetype)initWithTransformer:(NSArray<C> *(^)(NSArray<C> *))transformer onComplete:(void (^)(NSArray<C> *, NSArray<C> *))onComplete __attribute__((swift_name("init(transformer:onComplete:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("WebHistoryController")))
@protocol SharedWebHistoryController
@required
- (void)attachNavigator:(id<SharedStackNavigator>)navigator stack:(SharedValue<SharedChildStack<id, id> *> *)stack getPath:(NSString *(^)(id))getPath getConfiguration:(id (^)(NSString *))getConfiguration __attribute__((swift_name("attach(navigator:stack:getPath:getConfiguration:)")));
@property (readonly) NSArray<NSString *> *historyPaths __attribute__((swift_name("historyPaths")));
@end

__attribute__((swift_name("Value")))
@interface SharedValue<__covariant T> : SharedBase
@property (readonly) T value_ __attribute__((swift_name("value_")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedCancellation>)observeObserver:(void (^)(T))observer __attribute__((swift_name("observe(observer:)")));
- (void)subscribeObserver_:(void (^)(T))observer __attribute__((swift_name("subscribe(observer_:)"))) __attribute__((deprecated("Calling this method from Swift leaks the observer, because Kotlin wraps the function passed from Swift every time the method is called. Please use the new `observe` method which returns `Disposable`.")));
- (void)unsubscribeObserver_:(void (^)(T))observer __attribute__((swift_name("unsubscribe(observer_:)"))) __attribute__((deprecated("Calling this method from Swift doesn't have any effect, because Kotlin wraps the function passed from Swift every time the method is called. Please use the new `observe` method which returns `Disposable`.")));
@end

__attribute__((swift_name("MutableValue")))
@interface SharedMutableValue<T> : SharedValue<T>
@property (setter=setValue:) T value_ __attribute__((swift_name("value_")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)compareAndSetExpected:(T)expected new:(T)new_ __attribute__((swift_name("compareAndSet(expected:new:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObserveLifecycleMode")))
@interface SharedObserveLifecycleMode : SharedKotlinEnum<SharedObserveLifecycleMode *>
@property (class, readonly) SharedObserveLifecycleMode *createDestroy __attribute__((swift_name("createDestroy")));
@property (class, readonly) SharedObserveLifecycleMode *startStop __attribute__((swift_name("startStop")));
@property (class, readonly) SharedObserveLifecycleMode *resumePause __attribute__((swift_name("resumePause")));
@property (class, readonly) NSArray<SharedObserveLifecycleMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedObserveLifecycleMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("LifecycleCallbacks")))
@protocol SharedLifecycleCallbacks
@required
- (void)onCreate __attribute__((swift_name("onCreate()")));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
- (void)onPause __attribute__((swift_name("onPause()")));
- (void)onResume __attribute__((swift_name("onResume()")));
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)onStop __attribute__((swift_name("onStop()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleState")))
@interface SharedLifecycleState : SharedKotlinEnum<SharedLifecycleState *>
@property (class, readonly) SharedLifecycleState *destroyed __attribute__((swift_name("destroyed")));
@property (class, readonly) SharedLifecycleState *initialized __attribute__((swift_name("initialized")));
@property (class, readonly) SharedLifecycleState *created __attribute__((swift_name("created")));
@property (class, readonly) SharedLifecycleState *started __attribute__((swift_name("started")));
@property (class, readonly) SharedLifecycleState *resumed __attribute__((swift_name("resumed")));
@property (class, readonly) NSArray<SharedLifecycleState *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedLifecycleState *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("LifecycleRegistry")))
@protocol SharedLifecycleRegistry <SharedLifecycle, SharedLifecycleCallbacks>
@required
@end

__attribute__((swift_name("AnalyticsClient")))
@protocol SharedAnalyticsClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetMostOpenedLeaflets __attribute__((swift_name("GetMostOpenedLeaflets()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsRequest")))
@interface SharedGetLeafletsRequest : SharedWire_runtimeMessage<SharedGetLeafletsRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetLeafletsRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *business __attribute__((swift_name("business")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token business:(NSString *)business unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:business:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetLeafletsRequest *)doCopyToken:(SharedToken * _Nullable)token business:(NSString *)business unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:business:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsRequest.Companion")))
@interface SharedGetLeafletsRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetLeafletsRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetLeafletsRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsResponse")))
@interface SharedGetLeafletsResponse : SharedWire_runtimeMessage<SharedGetLeafletsResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetLeafletsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedGetLeafletsResponseLeaflets * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedTokenError * _Nullable tokenErr __attribute__((swift_name("tokenErr")));
- (instancetype)initWithTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedGetLeafletsResponseLeaflets * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(tokenErr:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetLeafletsResponse *)doCopyTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedGetLeafletsResponseLeaflets * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(tokenErr:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsResponse.Companion")))
@interface SharedGetLeafletsResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetLeafletsResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetLeafletsResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsResponse.Leaflets")))
@interface SharedGetLeafletsResponseLeaflets : SharedWire_runtimeMessage<SharedGetLeafletsResponseLeaflets *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetLeafletsResponseLeafletsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedLeaflet *> *leaflets __attribute__((swift_name("leaflets")));
- (instancetype)initWithLeaflets:(NSArray<SharedLeaflet *> *)leaflets unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(leaflets:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetLeafletsResponseLeaflets *)doCopyLeaflets:(NSArray<SharedLeaflet *> *)leaflets unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(leaflets:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLeafletsResponse.LeafletsCompanion")))
@interface SharedGetLeafletsResponseLeafletsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetLeafletsResponseLeafletsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetLeafletsResponseLeaflets *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsRequest")))
@interface SharedGetMostOpenedLeafletsRequest : SharedWire_runtimeMessage<SharedGetMostOpenedLeafletsRequest *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetMostOpenedLeafletsRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedTimeRange * _Nullable timerange __attribute__((swift_name("timerange")));
@property (readonly) SharedToken * _Nullable token __attribute__((swift_name("token")));
- (instancetype)initWithToken:(SharedToken * _Nullable)token timerange:(SharedTimeRange * _Nullable)timerange unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(token:timerange:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetMostOpenedLeafletsRequest *)doCopyToken:(SharedToken * _Nullable)token timerange:(SharedTimeRange * _Nullable)timerange unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(token:timerange:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsRequest.Companion")))
@interface SharedGetMostOpenedLeafletsRequestCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetMostOpenedLeafletsRequestCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetMostOpenedLeafletsRequest *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse")))
@interface SharedGetMostOpenedLeafletsResponse : SharedWire_runtimeMessage<SharedGetMostOpenedLeafletsResponse *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetMostOpenedLeafletsResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedGetMostOpenedLeafletsResponseOpenedLeaflets * _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) SharedTokenError * _Nullable tokenErr __attribute__((swift_name("tokenErr")));
- (instancetype)initWithTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedGetMostOpenedLeafletsResponseOpenedLeaflets * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(tokenErr:data_:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetMostOpenedLeafletsResponse *)doCopyTokenErr:(SharedTokenError * _Nullable)tokenErr data_:(SharedGetMostOpenedLeafletsResponseOpenedLeaflets * _Nullable)data_ unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(tokenErr:data_:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse.Companion")))
@interface SharedGetMostOpenedLeafletsResponseCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetMostOpenedLeafletsResponseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetMostOpenedLeafletsResponse *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse.OpenedLeaflet")))
@interface SharedGetMostOpenedLeafletsResponseOpenedLeaflet : SharedWire_runtimeMessage<SharedGetMostOpenedLeafletsResponseOpenedLeaflet *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetMostOpenedLeafletsResponseOpenedLeafletCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t count __attribute__((swift_name("count")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name count:(int64_t)count unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(id:name:count:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetMostOpenedLeafletsResponseOpenedLeaflet *)doCopyId:(NSString *)id name:(NSString *)name count:(int64_t)count unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(id:name:count:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse.OpenedLeafletCompanion")))
@interface SharedGetMostOpenedLeafletsResponseOpenedLeafletCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetMostOpenedLeafletsResponseOpenedLeafletCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetMostOpenedLeafletsResponseOpenedLeaflet *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse.OpenedLeaflets")))
@interface SharedGetMostOpenedLeafletsResponseOpenedLeaflets : SharedWire_runtimeMessage<SharedGetMostOpenedLeafletsResponseOpenedLeaflets *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedGetMostOpenedLeafletsResponseOpenedLeafletsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<SharedGetMostOpenedLeafletsResponseOpenedLeaflet *> *openedLeaflets __attribute__((swift_name("openedLeaflets")));
@property (readonly) SharedTimeRange * _Nullable timerange __attribute__((swift_name("timerange")));
- (instancetype)initWithTimerange:(SharedTimeRange * _Nullable)timerange openedLeaflets:(NSArray<SharedGetMostOpenedLeafletsResponseOpenedLeaflet *> *)openedLeaflets unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(timerange:openedLeaflets:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedGetMostOpenedLeafletsResponseOpenedLeaflets *)doCopyTimerange:(SharedTimeRange * _Nullable)timerange openedLeaflets:(NSArray<SharedGetMostOpenedLeafletsResponseOpenedLeaflet *> *)openedLeaflets unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(timerange:openedLeaflets:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMostOpenedLeafletsResponse.OpenedLeafletsCompanion")))
@interface SharedGetMostOpenedLeafletsResponseOpenedLeafletsCompanion : SharedBase
@property (class, readonly, getter=shared) SharedGetMostOpenedLeafletsResponseOpenedLeafletsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedGetMostOpenedLeafletsResponseOpenedLeaflets *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcAnalyticsClient")))
@interface SharedGrpcAnalyticsClient : SharedBase <SharedAnalyticsClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetMostOpenedLeaflets __attribute__((swift_name("GetMostOpenedLeaflets()")));
@end

__attribute__((swift_name("PublicClient")))
@protocol SharedPublicClient <SharedWire_runtimeService>
@required
- (id<SharedWire_grpc_clientGrpcCall>)GetLeaflets __attribute__((swift_name("GetLeaflets()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GrpcPublicClient")))
@interface SharedGrpcPublicClient : SharedBase <SharedPublicClient>
- (instancetype)initWithClient:(SharedWire_grpc_clientGrpcClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (id<SharedWire_grpc_clientGrpcCall>)GetLeaflets __attribute__((swift_name("GetLeaflets()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Leaflet")))
@interface SharedLeaflet : SharedWire_runtimeMessage<SharedLeaflet *, SharedKotlinNothing *>
@property (class, readonly, getter=companion) SharedLeafletCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) SharedTimeRange * _Nullable timerange __attribute__((swift_name("timerange")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
- (instancetype)initWithId:(NSString *)id title:(NSString *)title imageUrl:(NSString *)imageUrl url:(NSString *)url timerange:(SharedTimeRange * _Nullable)timerange unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(id:title:imageUrl:url:timerange:unknownFields:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)initWithAdapter:(SharedWire_runtimeProtoAdapter<SharedWire_runtimeMessage *> *)adapter unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("init(adapter:unknownFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SharedLeaflet *)doCopyId:(NSString *)id title:(NSString *)title imageUrl:(NSString *)imageUrl url:(NSString *)url timerange:(SharedTimeRange * _Nullable)timerange unknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("doCopy(id:title:imageUrl:url:timerange:unknownFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKotlinNothing *)doNewBuilder __attribute__((swift_name("doNewBuilder()"))) __attribute__((unavailable("Shouldn't be used in Kotlin")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Leaflet.Companion")))
@interface SharedLeafletCompanion : SharedBase
@property (class, readonly, getter=shared) SharedLeafletCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLeaflet *> *ADAPTER __attribute__((swift_name("ADAPTER")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

@interface SharedSwiftType (Extensions)
- (id<SharedKotlinKClass>)getClazz __attribute__((swift_name("getClazz()")));
@end

@interface SharedMutableValue (Extensions)
- (id)getAndUpdateFunction:(id (^)(id))function __attribute__((swift_name("getAndUpdate(function:)")));
- (void)updateFunction:(id (^)(id))function __attribute__((swift_name("update(function:)")));
- (id)updateAndGetFunction:(id (^)(id))function __attribute__((swift_name("updateAndGet(function:)")));
@end

@interface SharedValue (Extensions)
@property (readonly) SharedChildCreated<id, id> *active __attribute__((swift_name("active")));
@property (readonly) NSArray<SharedChildCreated<id, id> *> *backStack __attribute__((swift_name("backStack")));
@property (readonly) SharedChildCreated<id, id> * _Nullable child __attribute__((swift_name("child")));
@property (readonly) NSArray<SharedChildCreated<id, id> *> *items __attribute__((swift_name("items")));
@property (readonly) SharedChildCreated<id, id> * _Nullable overlay __attribute__((swift_name("overlay"))) __attribute__((deprecated("Please use Child Slot API")));
- (id)getValueThisRef:(id _Nullable)thisRef property:(id<SharedKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
- (SharedValue<id> *)mapMapper:(id (^)(id))mapper __attribute__((swift_name("map(mapper:)")));
- (void)observeLifecycle:(id<SharedLifecycle>)lifecycle mode:(SharedObserveLifecycleMode *)mode observer:(void (^)(id))observer __attribute__((swift_name("observe(lifecycle:mode:observer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildOverlayFactoryKt")))
@interface SharedChildOverlayFactoryKt : SharedBase
+ (SharedValue<SharedChildOverlay<id<SharedRuntimeParcelable>, id> *> *)childOverlay:(id<SharedComponentContext>)receiver source:(id<SharedOverlayNavigationSource>)source key:(NSString *)key initialConfiguration:(id<SharedRuntimeParcelable> _Nullable (^)(void))initialConfiguration persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childOverlay(_:source:key:initialConfiguration:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Please use Child Slot API")));
+ (SharedValue<SharedChildOverlay<id, id> *> *)childOverlay:(id<SharedComponentContext>)receiver source:(id<SharedOverlayNavigationSource>)source saveConfiguration:(id<SharedParcelableParcelableContainer> _Nullable (^)(id _Nullable))saveConfiguration restoreConfiguration:(id _Nullable (^)(id<SharedParcelableParcelableContainer>))restoreConfiguration key:(NSString *)key initialConfiguration:(id _Nullable (^)(void))initialConfiguration handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childOverlay(_:source:saveConfiguration:restoreConfiguration:key:initialConfiguration:handleBackButton:childFactory:)"))) __attribute__((deprecated("Please use Child Slot API")));
+ (SharedValue<SharedChildOverlay<id<SharedRuntimeParcelable>, id> *> *)childOverlay:(id<SharedComponentContext>)receiver source:(id<SharedOverlayNavigationSource>)source configurationClass:(id<SharedKotlinKClass>)configurationClass key:(NSString *)key initialConfiguration:(id<SharedRuntimeParcelable> _Nullable (^)(void))initialConfiguration persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childOverlay(_:source:configurationClass:key:initialConfiguration:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Please use Child Slot API")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildPagesFactoryKt")))
@interface SharedChildPagesFactoryKt : SharedBase
+ (SharedValue<SharedChildPages<id<SharedRuntimeParcelable>, id> *> *)childPages:(id<SharedComponentContext>)receiver source:(id<SharedPagesNavigationSource>)source initialPages:(SharedPages<id<SharedRuntimeParcelable>> *(^)(void))initialPages key:(NSString *)key pageStatus:(SharedChildNavStateStatus *(^)(SharedInt *, SharedPages<id<SharedRuntimeParcelable>> *))pageStatus persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childPages(_:source:initialPages:key:pageStatus:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
+ (SharedValue<SharedChildPages<id, id> *> *)childPages:(id<SharedComponentContext>)receiver source:(id<SharedPagesNavigationSource>)source serializer:(id<SharedKotlinx_serialization_coreKSerializer> _Nullable)serializer initialPages:(SharedPages<id> *(^)(void))initialPages key:(NSString *)key pageStatus:(SharedChildNavStateStatus *(^)(SharedInt *, SharedPages<id> *))pageStatus handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childPages(_:source:serializer:initialPages:key:pageStatus:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildPages<id, id> *> *)childPages:(id<SharedComponentContext>)receiver source:(id<SharedPagesNavigationSource>)source initialPages:(SharedPages<id> *(^)(void))initialPages savePages:(id<SharedParcelableParcelableContainer> _Nullable (^)(SharedPages<id> *))savePages restorePages:(SharedPages<id> * _Nullable (^)(id<SharedParcelableParcelableContainer>))restorePages key:(NSString *)key pageStatus:(SharedChildNavStateStatus *(^)(SharedInt *, SharedPages<id> *))pageStatus handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childPages(_:source:initialPages:savePages:restorePages:key:pageStatus:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildPages<id<SharedRuntimeParcelable>, id> *> *)childPages:(id<SharedComponentContext>)receiver source:(id<SharedPagesNavigationSource>)source initialPages:(SharedPages<id<SharedRuntimeParcelable>> *(^)(void))initialPages configurationClass:(id<SharedKotlinKClass>)configurationClass key:(NSString *)key pageStatus:(SharedChildNavStateStatus *(^)(SharedInt *, SharedPages<id<SharedRuntimeParcelable>> *))pageStatus persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childPages(_:source:initialPages:configurationClass:key:pageStatus:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildSlotFactoryKt")))
@interface SharedChildSlotFactoryKt : SharedBase
+ (SharedValue<SharedChildSlot<id<SharedRuntimeParcelable>, id> *> *)childSlot:(id<SharedComponentContext>)receiver source:(id<SharedSlotNavigationSource>)source key:(NSString *)key initialConfiguration:(id<SharedRuntimeParcelable> _Nullable (^)(void))initialConfiguration persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childSlot(_:source:key:initialConfiguration:persistent:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildSlot<id, id> *> *)childSlot:(id<SharedComponentContext>)receiver source:(id<SharedSlotNavigationSource>)source serializer:(id<SharedKotlinx_serialization_coreKSerializer> _Nullable)serializer initialConfiguration:(id _Nullable (^)(void))initialConfiguration key:(NSString *)key handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childSlot(_:source:serializer:initialConfiguration:key:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildSlot<id, id> *> *)childSlot:(id<SharedComponentContext>)receiver source:(id<SharedSlotNavigationSource>)source saveConfiguration:(id<SharedParcelableParcelableContainer> _Nullable (^)(id _Nullable))saveConfiguration restoreConfiguration:(id _Nullable (^)(id<SharedParcelableParcelableContainer>))restoreConfiguration key:(NSString *)key initialConfiguration:(id _Nullable (^)(void))initialConfiguration handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childSlot(_:source:saveConfiguration:restoreConfiguration:key:initialConfiguration:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildSlot<id<SharedRuntimeParcelable>, id> *> *)childSlot:(id<SharedComponentContext>)receiver source:(id<SharedSlotNavigationSource>)source configurationClass:(id<SharedKotlinKClass>)configurationClass key:(NSString *)key initialConfiguration:(id<SharedRuntimeParcelable> _Nullable (^)(void))initialConfiguration persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childSlot(_:source:configurationClass:key:initialConfiguration:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildStackFactoryKt")))
@interface SharedChildStackFactoryKt : SharedBase
+ (SharedValue<SharedChildStack<id<SharedRuntimeParcelable>, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source initialConfiguration:(id<SharedRuntimeParcelable>)initialConfiguration key:(NSString *)key persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:initialConfiguration:key:persistent:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildStack<id<SharedRuntimeParcelable>, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source initialStack:(NSArray<id<SharedRuntimeParcelable>> *(^)(void))initialStack key:(NSString *)key persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:initialStack:key:persistent:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildStack<id, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source serializer:(id<SharedKotlinx_serialization_coreKSerializer> _Nullable)serializer initialConfiguration:(id)initialConfiguration key:(NSString *)key handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:serializer:initialConfiguration:key:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildStack<id, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source serializer:(id<SharedKotlinx_serialization_coreKSerializer> _Nullable)serializer initialStack:(NSArray<id> *(^)(void))initialStack key:(NSString *)key handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:serializer:initialStack:key:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildStack<id, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source initialStack:(NSArray<id> *(^)(void))initialStack saveStack:(id<SharedParcelableParcelableContainer> _Nullable (^)(NSArray<id> *))saveStack restoreStack:(NSArray<id> * _Nullable (^)(id<SharedParcelableParcelableContainer>))restoreStack key:(NSString *)key handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:initialStack:saveStack:restoreStack:key:handleBackButton:childFactory:)")));
+ (SharedValue<SharedChildStack<id<SharedRuntimeParcelable>, id> *> *)childStack:(id<SharedComponentContext>)receiver source:(id<SharedStackNavigationSource>)source initialStack:(NSArray<id<SharedRuntimeParcelable>> *(^)(void))initialStack configurationClass:(id<SharedKotlinKClass>)configurationClass key:(NSString *)key persistent:(BOOL)persistent handleBackButton:(BOOL)handleBackButton childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("childStack(_:source:initialStack:configurationClass:key:persistent:handleBackButton:childFactory:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChildrenFactoryKt")))
@interface SharedChildrenFactoryKt : SharedBase
+ (SharedValue<id> *)children:(id<SharedComponentContext>)receiver source:(id<SharedNavigationSource>)source key:(NSString *)key initialState:(id<SharedNavState> (^)(void))initialState navTransformer:(id<SharedNavState> (^)(id<SharedNavState>, id))navTransformer stateMapper:(id (^)(id<SharedNavState>, NSArray<SharedChild<id<SharedRuntimeParcelable>, id> *> *))stateMapper onStateChanged:(void (^)(id<SharedNavState>, id<SharedNavState> _Nullable))onStateChanged onEventComplete:(void (^)(id, id<SharedNavState>, id<SharedNavState>))onEventComplete backTransformer:(id<SharedNavState> (^ _Nullable (^)(id<SharedNavState>))(void))backTransformer childFactory:(id (^)(id<SharedRuntimeParcelable>, id<SharedComponentContext>))childFactory __attribute__((swift_name("children(_:source:key:initialState:navTransformer:stateMapper:onStateChanged:onEventComplete:backTransformer:childFactory:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
+ (SharedValue<id> *)children:(id<SharedComponentContext>)receiver source:(id<SharedNavigationSource>)source stateSerializer:(id<SharedKotlinx_serialization_coreKSerializer> _Nullable)stateSerializer initialState:(id<SharedNavState> (^)(void))initialState key:(NSString *)key navTransformer:(id<SharedNavState> (^)(id<SharedNavState>, id))navTransformer stateMapper:(id (^)(id<SharedNavState>, NSArray<SharedChild<id, id> *> *))stateMapper onStateChanged:(void (^)(id<SharedNavState>, id<SharedNavState> _Nullable))onStateChanged onEventComplete:(void (^)(id, id<SharedNavState>, id<SharedNavState>))onEventComplete backTransformer:(id<SharedNavState> (^ _Nullable (^)(id<SharedNavState>))(void))backTransformer childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("children(_:source:stateSerializer:initialState:key:navTransformer:stateMapper:onStateChanged:onEventComplete:backTransformer:childFactory:)")));
+ (SharedValue<id> *)children:(id<SharedComponentContext>)receiver source:(id<SharedNavigationSource>)source key:(NSString *)key initialState:(id<SharedNavState> (^)(void))initialState saveState:(id<SharedParcelableParcelableContainer> _Nullable (^)(id<SharedNavState>))saveState restoreState:(id<SharedNavState> _Nullable (^)(id<SharedParcelableParcelableContainer>))restoreState navTransformer:(id<SharedNavState> (^)(id<SharedNavState>, id))navTransformer stateMapper:(id (^)(id<SharedNavState>, NSArray<SharedChild<id, id> *> *))stateMapper onStateChanged:(void (^)(id<SharedNavState>, id<SharedNavState> _Nullable))onStateChanged onEventComplete:(void (^)(id, id<SharedNavState>, id<SharedNavState>))onEventComplete backTransformer:(id<SharedNavState> (^ _Nullable (^)(id<SharedNavState>))(void))backTransformer childFactory:(id (^)(id, id<SharedComponentContext>))childFactory __attribute__((swift_name("children(_:source:key:initialState:saveState:restoreState:navTransformer:stateMapper:onStateChanged:onEventComplete:backTransformer:childFactory:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ComponentContextExtKt")))
@interface SharedComponentContextExtKt : SharedBase
+ (id<SharedComponentContext>)childContext:(id<SharedComponentContext>)receiver key:(NSString *)key lifecycle:(id<SharedLifecycle> _Nullable)lifecycle __attribute__((swift_name("childContext(_:key:lifecycle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIHelpersKt")))
@interface SharedDIHelpersKt : SharedBase
+ (id _Nullable)koinGetClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("koinGet(clazz:qualifier:parameters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorHandlersKt")))
@interface SharedErrorHandlersKt : SharedBase
@property (class) void (^onDecomposeError)(SharedKotlinException *) __attribute__((swift_name("onDecomposeError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomescreenUILogicModuleKt")))
@interface SharedHomescreenUILogicModuleKt : SharedBase
@property (class, readonly) SharedKoin_coreModule *homescreenUILogicModule __attribute__((swift_name("homescreenUILogicModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleExtKt")))
@interface SharedLifecycleExtKt : SharedBase
+ (void)doOnCreate:(id<SharedLifecycle>)receiver block:(void (^)(void))block __attribute__((swift_name("doOnCreate(_:block:)")));
+ (void)doOnCreate:(id<SharedLifecycleOwner>)receiver block_:(void (^)(void))block __attribute__((swift_name("doOnCreate(_:block_:)")));
+ (void)doOnDestroy:(id<SharedLifecycle>)receiver block:(void (^)(void))block __attribute__((swift_name("doOnDestroy(_:block:)")));
+ (void)doOnDestroy:(id<SharedLifecycleOwner>)receiver block_:(void (^)(void))block __attribute__((swift_name("doOnDestroy(_:block_:)")));
+ (void)doOnPause:(id<SharedLifecycle>)receiver isOneTime:(BOOL)isOneTime block:(void (^)(void))block __attribute__((swift_name("doOnPause(_:isOneTime:block:)")));
+ (void)doOnPause:(id<SharedLifecycleOwner>)receiver isOneTime:(BOOL)isOneTime block_:(void (^)(void))block __attribute__((swift_name("doOnPause(_:isOneTime:block_:)")));
+ (void)doOnResume:(id<SharedLifecycle>)receiver isOneTime:(BOOL)isOneTime block:(void (^)(void))block __attribute__((swift_name("doOnResume(_:isOneTime:block:)")));
+ (void)doOnResume:(id<SharedLifecycleOwner>)receiver isOneTime:(BOOL)isOneTime block_:(void (^)(void))block __attribute__((swift_name("doOnResume(_:isOneTime:block_:)")));
+ (void)doOnStart:(id<SharedLifecycle>)receiver isOneTime:(BOOL)isOneTime block:(void (^)(void))block __attribute__((swift_name("doOnStart(_:isOneTime:block:)")));
+ (void)doOnStart:(id<SharedLifecycleOwner>)receiver isOneTime:(BOOL)isOneTime block_:(void (^)(void))block __attribute__((swift_name("doOnStart(_:isOneTime:block_:)")));
+ (void)doOnStop:(id<SharedLifecycle>)receiver isOneTime:(BOOL)isOneTime block:(void (^)(void))block __attribute__((swift_name("doOnStop(_:isOneTime:block:)")));
+ (void)doOnStop:(id<SharedLifecycleOwner>)receiver isOneTime:(BOOL)isOneTime block_:(void (^)(void))block __attribute__((swift_name("doOnStop(_:isOneTime:block_:)")));
+ (id<SharedLifecycleCallbacks>)subscribe:(id<SharedLifecycle>)receiver onCreate:(void (^ _Nullable)(void))onCreate onStart:(void (^ _Nullable)(void))onStart onResume:(void (^ _Nullable)(void))onResume onPause:(void (^ _Nullable)(void))onPause onStop:(void (^ _Nullable)(void))onStop onDestroy:(void (^ _Nullable)(void))onDestroy __attribute__((swift_name("subscribe(_:onCreate:onStart:onResume:onPause:onStop:onDestroy:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleRegistryKt")))
@interface SharedLifecycleRegistryKt : SharedBase
+ (id<SharedLifecycleRegistry>)LifecycleRegistry __attribute__((swift_name("LifecycleRegistry()")));
+ (id<SharedLifecycleRegistry>)LifecycleRegistryInitialState:(SharedLifecycleState *)initialState __attribute__((swift_name("LifecycleRegistry(initialState:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleRegistryExtKt")))
@interface SharedLifecycleRegistryExtKt : SharedBase
+ (void)create:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("create(_:)")));
+ (void)destroy:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("destroy(_:)")));
+ (void)pause:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("pause(_:)")));
+ (void)resume:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("resume(_:)")));
+ (void)start:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("start(_:)")));
+ (void)stop:(id<SharedLifecycleRegistry>)receiver __attribute__((swift_name("stop(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableValueBuilderKt")))
@interface SharedMutableValueBuilderKt : SharedBase
+ (SharedMutableValue<id> *)MutableValueInitialValue:(id)initialValue __attribute__((swift_name("MutableValue(initialValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NativeModuleKt")))
@interface SharedNativeModuleKt : SharedBase
+ (SharedKoin_coreModule *)makeNativeModuleNativeTestDependency:(id<SharedNativeTestDependency> (^)(SharedKoin_coreScope *))nativeTestDependency __attribute__((swift_name("makeNativeModule(nativeTestDependency:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverlayNavigationKt")))
@interface SharedOverlayNavigationKt : SharedBase
+ (id<SharedOverlayNavigation>)OverlayNavigation __attribute__((swift_name("OverlayNavigation()"))) __attribute__((deprecated("Please use Child Slot API")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverlayNavigatorExtKt")))
@interface SharedOverlayNavigatorExtKt : SharedBase
+ (void)activate:(id<SharedOverlayNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(void))onComplete __attribute__((swift_name("activate(_:configuration:onComplete:)"))) __attribute__((deprecated("Please use Child Slot API")));
+ (void)dismiss:(id<SharedOverlayNavigator>)receiver onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("dismiss(_:onComplete:)"))) __attribute__((deprecated("Please use Child Slot API")));
+ (void)navigate:(id<SharedOverlayNavigator>)receiver transformer:(id _Nullable (^)(id _Nullable))transformer __attribute__((swift_name("navigate(_:transformer:)"))) __attribute__((deprecated("Please use Child Slot API")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagesNavigationKt")))
@interface SharedPagesNavigationKt : SharedBase
+ (id<SharedPagesNavigation>)PagesNavigation __attribute__((swift_name("PagesNavigation()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagesNavigatorExtKt")))
@interface SharedPagesNavigatorExtKt : SharedBase
+ (void)clear:(id<SharedPagesNavigator>)receiver onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("clear(_:onComplete:)")));
+ (void)navigate:(id<SharedPagesNavigator>)receiver transformer:(SharedPages<id> *(^)(SharedPages<id> *))transformer __attribute__((swift_name("navigate(_:transformer:)")));
+ (void)select:(id<SharedPagesNavigator>)receiver index:(int32_t)index onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("select(_:index:onComplete:)")));
+ (void)selectFirst:(id<SharedPagesNavigator>)receiver onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("selectFirst(_:onComplete:)")));
+ (void)selectLast:(id<SharedPagesNavigator>)receiver onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("selectLast(_:onComplete:)")));
+ (void)selectNext:(id<SharedPagesNavigator>)receiver circular:(BOOL)circular onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("selectNext(_:circular:onComplete:)")));
+ (void)selectPrev:(id<SharedPagesNavigator>)receiver circular:(BOOL)circular onComplete:(void (^)(SharedPages<id> *, SharedPages<id> *))onComplete __attribute__((swift_name("selectPrev(_:circular:onComplete:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedModuleKt")))
@interface SharedSharedModuleKt : SharedBase
@property (class, readonly) SharedKoin_coreModule *sharedModule __attribute__((swift_name("sharedModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlotNavigationKt")))
@interface SharedSlotNavigationKt : SharedBase
+ (id<SharedSlotNavigation>)SlotNavigation __attribute__((swift_name("SlotNavigation()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlotNavigatorExtKt")))
@interface SharedSlotNavigatorExtKt : SharedBase
+ (void)activate:(id<SharedSlotNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(void))onComplete __attribute__((swift_name("activate(_:configuration:onComplete:)")));
+ (void)dismiss:(id<SharedSlotNavigator>)receiver onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("dismiss(_:onComplete:)")));
+ (void)navigate:(id<SharedSlotNavigator>)receiver transformer:(id _Nullable (^)(id _Nullable))transformer __attribute__((swift_name("navigate(_:transformer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StackNavigationKt")))
@interface SharedStackNavigationKt : SharedBase
+ (id<SharedStackNavigation>)StackNavigation __attribute__((swift_name("StackNavigation()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StackNavigatorExtKt")))
@interface SharedStackNavigatorExtKt : SharedBase
+ (void)bringToFront:(id<SharedStackNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(void))onComplete __attribute__((swift_name("bringToFront(_:configuration:onComplete:)")));
+ (void)navigate:(id<SharedStackNavigator>)receiver transformer:(NSArray<id> *(^)(NSArray<id> *))transformer __attribute__((swift_name("navigate(_:transformer:)")));
+ (void)pop:(id<SharedStackNavigator>)receiver onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("pop(_:onComplete:)")));
+ (void)popTo:(id<SharedStackNavigator>)receiver index:(int32_t)index onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("popTo(_:index:onComplete:)")));
+ (void)popWhile:(id<SharedStackNavigator>)receiver predicate:(SharedBoolean *(^)(id))predicate __attribute__((swift_name("popWhile(_:predicate:)")));
+ (void)popWhile:(id<SharedStackNavigator>)receiver predicate:(SharedBoolean *(^)(id))predicate onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("popWhile(_:predicate:onComplete:)")));
+ (void)push:(id<SharedStackNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(void))onComplete __attribute__((swift_name("push(_:configuration:onComplete:)")));
+ (void)pushNew:(id<SharedStackNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(SharedBoolean *))onComplete __attribute__((swift_name("pushNew(_:configuration:onComplete:)")));
+ (void)replaceAll:(id<SharedStackNavigator>)receiver configurations:(SharedKotlinArray<id> *)configurations onComplete:(void (^)(void))onComplete __attribute__((swift_name("replaceAll(_:configurations:onComplete:)")));
+ (void)replaceCurrent:(id<SharedStackNavigator>)receiver configuration:(id)configuration onComplete:(void (^)(void))onComplete __attribute__((swift_name("replaceCurrent(_:configuration:onComplete:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface SharedUtilsKt : SharedBase
+ (NSString *)hashString:(id)receiver __attribute__((swift_name("hashString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface Shared__SkieSuspendWrappersKt : SharedBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(SharedSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__10__receiveCatchingDispatchReceiver:(id<SharedKotlinx_coroutines_coreReceiveChannel>)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__10__receiveCatching(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__11__receiveOrNullDispatchReceiver:(id<SharedKotlinx_coroutines_coreReceiveChannel>)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__11__receiveOrNull(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__12__hasNextDispatchReceiver:(id<SharedKotlinx_coroutines_coreChannelIterator>)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__12__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<SharedKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__2__emitDispatchReceiver:(id<SharedKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__3__getLeafletsDispatchReceiver:(SharedLeafletRepository *)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__getLeaflets(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__4__getLeafletsWithTokenDispatchReceiver:(SharedLeafletRepository *)dispatchReceiver token:(NSString *)token suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__getLeafletsWithToken(dispatchReceiver:token:suspendHandler:)")));
+ (void)Skie_Suspend__5__getLeafletsDispatchReceiver:(id<SharedLeafletSuspendClient>)dispatchReceiver request:(SharedGetLeafletsRequest *)request suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__getLeaflets(dispatchReceiver:request:suspendHandler:)")));
+ (void)Skie_Suspend__6__registerDeviceDispatchReceiver:(id<SharedRegisterDeviceRepository>)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__6__registerDevice(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__7__executeDispatchReceiver:(id<SharedWire_grpc_clientGrpcCall>)dispatchReceiver request:(id)request suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__7__execute(dispatchReceiver:request:suspendHandler:)")));
+ (void)Skie_Suspend__8__sendDispatchReceiver:(id<SharedKotlinx_coroutines_coreSendChannel>)dispatchReceiver element:(id _Nullable)element suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__8__send(dispatchReceiver:element:suspendHandler:)")));
+ (void)Skie_Suspend__9__receiveDispatchReceiver:(id<SharedKotlinx_coroutines_coreReceiveChannel>)dispatchReceiver suspendHandler:(SharedSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__9__receive(dispatchReceiver:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface Shared__SkieTypeExportsKt : SharedBase
+ (void)skieTypeExports_0P0:(SharedWire_runtimeMessageBuilder<id, id> *)p0 p1:(id<SharedKotlinx_coroutines_coreSelectClause0>)p1 p2:(SharedKotlinx_serialization_corePolymorphicKind *)p2 p3:(SharedKotlinx_serialization_corePrimitiveKind *)p3 p4:(SharedKotlinx_serialization_coreSerialKindCONTEXTUAL *)p4 p5:(SharedKotlinx_serialization_coreSerialKindENUM *)p5 p6:(SharedKotlinx_serialization_coreStructureKind *)p6 p7:(SharedKotlinx_serialization_corePolymorphicKindOPEN *)p7 p8:(SharedKotlinx_serialization_corePolymorphicKindSEALED *)p8 p9:(SharedKotlinx_serialization_corePrimitiveKindBOOLEAN *)p9 p10:(SharedKotlinx_serialization_corePrimitiveKindBYTE *)p10 p11:(SharedKotlinx_serialization_corePrimitiveKindCHAR *)p11 p12:(SharedKotlinx_serialization_corePrimitiveKindDOUBLE *)p12 p13:(SharedKotlinx_serialization_corePrimitiveKindFLOAT *)p13 p14:(SharedKotlinx_serialization_corePrimitiveKindINT *)p14 p15:(SharedKotlinx_serialization_corePrimitiveKindLONG *)p15 p16:(SharedKotlinx_serialization_corePrimitiveKindSHORT *)p16 p17:(SharedKotlinx_serialization_corePrimitiveKindSTRING *)p17 p18:(SharedKotlinx_serialization_coreStructureKindCLASS *)p18 p19:(SharedKotlinx_serialization_coreStructureKindLIST *)p19 p20:(SharedKotlinx_serialization_coreStructureKindMAP *)p20 p21:(SharedKotlinx_serialization_coreStructureKindOBJECT *)p21 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:p21:)")));
@end

__attribute__((swift_name("Wire_runtimeProtoAdapter")))
@interface SharedWire_runtimeProtoAdapter<E> : SharedBase
@property (class, readonly, getter=companion) SharedWire_runtimeProtoAdapterCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) E _Nullable identity __attribute__((swift_name("identity")));
@property (readonly) NSString * _Nullable sourceFile __attribute__((swift_name("sourceFile")));
@property (readonly) SharedWire_runtimeSyntax *syntax __attribute__((swift_name("syntax")));
@property (readonly) id<SharedKotlinKClass> _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable typeUrl __attribute__((swift_name("typeUrl")));
- (instancetype)initWithFieldEncoding:(SharedWire_runtimeFieldEncoding *)fieldEncoding type:(id<SharedKotlinKClass> _Nullable)type typeUrl:(NSString * _Nullable)typeUrl syntax:(SharedWire_runtimeSyntax *)syntax identity:(E _Nullable)identity sourceFile:(NSString * _Nullable)sourceFile __attribute__((swift_name("init(fieldEncoding:type:typeUrl:syntax:identity:sourceFile:)"))) __attribute__((objc_designated_initializer));
- (SharedWire_runtimeProtoAdapter<NSArray<id> *> *)asPacked __attribute__((swift_name("asPacked()")));
- (SharedWire_runtimeProtoAdapter<NSArray<id> *> *)asRepeated __attribute__((swift_name("asRepeated()")));
- (E _Nullable)decodeReader:(SharedWire_runtimeProtoReader *)reader __attribute__((swift_name("decode(reader:)")));
- (E _Nullable)decodeBytes:(SharedKotlinByteArray *)bytes __attribute__((swift_name("decode(bytes:)")));
- (E _Nullable)decodeSource:(id<SharedOkioBufferedSource>)source __attribute__((swift_name("decode(source:)")));
- (E _Nullable)decodeBytes_:(SharedOkioByteString *)bytes __attribute__((swift_name("decode(bytes_:)")));
- (SharedKotlinByteArray *)encodeValue:(E _Nullable)value __attribute__((swift_name("encode(value:)")));
- (void)encodeWriter:(SharedWire_runtimeProtoWriter *)writer value:(E _Nullable)value __attribute__((swift_name("encode(writer:value:)")));
- (void)encodeWriter:(SharedWire_runtimeReverseProtoWriter *)writer value_:(E _Nullable)value __attribute__((swift_name("encode(writer:value_:)")));
- (void)encodeSink:(id<SharedOkioBufferedSink>)sink value:(E _Nullable)value __attribute__((swift_name("encode(sink:value:)")));
- (SharedOkioByteString *)encodeByteStringValue:(E _Nullable)value __attribute__((swift_name("encodeByteString(value:)")));
- (void)encodeWithTagWriter:(SharedWire_runtimeProtoWriter *)writer tag:(int32_t)tag value:(E _Nullable)value __attribute__((swift_name("encodeWithTag(writer:tag:value:)")));
- (void)encodeWithTagWriter:(SharedWire_runtimeReverseProtoWriter *)writer tag:(int32_t)tag value_:(E _Nullable)value __attribute__((swift_name("encodeWithTag(writer:tag:value_:)")));
- (int32_t)encodedSizeValue:(E _Nullable)value __attribute__((swift_name("encodedSize(value:)")));
- (int32_t)encodedSizeWithTagTag:(int32_t)tag value:(E _Nullable)value __attribute__((swift_name("encodedSizeWithTag(tag:value:)")));
- (E _Nullable)redactValue:(E _Nullable)value __attribute__((swift_name("redact(value:)")));
- (NSString *)toStringValue:(E _Nullable)value __attribute__((swift_name("toString(value:)")));
- (void)tryDecodeReader:(SharedWire_runtimeProtoReader *)reader destination:(NSMutableArray<id> *)destination __attribute__((swift_name("tryDecode(reader:destination:)")));
@end

__attribute__((swift_name("OkioByteString")))
@interface SharedOkioByteString : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(SharedOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(SharedKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(SharedKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(SharedOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(SharedKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(SharedOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (SharedOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (SharedOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (SharedOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("OkioCloseable")))
@protocol SharedOkioCloseable
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("OkioSink")))
@protocol SharedOkioSink <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("OkioBufferedSink")))
@protocol SharedOkioBufferedSink <SharedOkioSink>
@required
- (id<SharedOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<SharedOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<SharedOkioBufferedSink>)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<SharedOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<SharedOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<SharedOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<SharedOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<SharedOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<SharedOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<SharedOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<SharedOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<SharedOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<SharedOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeInstant")))
@interface SharedWire_runtimeInstant : SharedBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int64_t)getEpochSecond __attribute__((swift_name("getEpochSecond()")));
- (int32_t)getNano __attribute__((swift_name("getNano()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((swift_name("Wire_grpc_clientGrpcCall")))
@protocol SharedWire_grpc_clientGrpcCall
@required
- (void)cancel __attribute__((swift_name("cancel()")));
- (id<SharedWire_grpc_clientGrpcCall>)clone __attribute__((swift_name("clone()")));
- (void)enqueueRequest:(id)request callback:(id<SharedWire_grpc_clientGrpcCallCallback>)callback __attribute__((swift_name("enqueue(request:callback:)")));

/**
 * @note This method converts instances of IOException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeRequest:(id)request completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(request:completionHandler:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)executeBlockingRequest:(id)request error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("executeBlocking(request:)")));
- (BOOL)isCanceled __attribute__((swift_name("isCanceled()")));
- (BOOL)isExecuted __attribute__((swift_name("isExecuted()")));
@property (readonly) SharedWire_grpc_clientGrpcMethod<id, id> *method __attribute__((swift_name("method")));
@property NSDictionary<NSString *, NSString *> *requestMetadata __attribute__((swift_name("requestMetadata")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property (readonly, getter=timeout_) SharedOkioTimeout *timeout __attribute__((swift_name("timeout")));
@end

__attribute__((swift_name("Wire_grpc_clientGrpcClient")))
@interface SharedWire_grpc_clientGrpcClient : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedWire_grpc_clientGrpcCall>)doNewCallMethod:(SharedWire_grpc_clientGrpcMethod<id, id> *)method __attribute__((swift_name("doNewCall(method:)")));
- (id<SharedWire_grpc_clientGrpcStreamingCall>)doNewStreamingCallMethod:(SharedWire_grpc_clientGrpcMethod<id, id> *)method __attribute__((swift_name("doNewStreamingCall(method:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Wire_grpc_clientGrpcStreamingCall")))
@protocol SharedWire_grpc_clientGrpcStreamingCall
@required
- (void)cancel __attribute__((swift_name("cancel()")));
- (id<SharedWire_grpc_clientGrpcStreamingCall>)clone __attribute__((swift_name("clone()")));
- (SharedKotlinPair<id<SharedKotlinx_coroutines_coreSendChannel>, id<SharedKotlinx_coroutines_coreReceiveChannel>> *)execute __attribute__((swift_name("execute()"))) __attribute__((deprecated("Provide a scope, preferably not GlobalScope")));
- (SharedKotlinPair<id<SharedWire_runtimeMessageSink>, id<SharedWire_runtimeMessageSource>> *)executeBlocking __attribute__((swift_name("executeBlocking()")));
- (SharedKotlinPair<id<SharedKotlinx_coroutines_coreSendChannel>, id<SharedKotlinx_coroutines_coreReceiveChannel>> *)executeInScope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("executeIn(scope:)")));
- (BOOL)isCanceled __attribute__((swift_name("isCanceled()")));
- (BOOL)isExecuted __attribute__((swift_name("isExecuted()")));
@property (readonly) SharedWire_grpc_clientGrpcMethod<id, id> *method __attribute__((swift_name("method")));
@property NSDictionary<NSString *, NSString *> *requestMetadata __attribute__((swift_name("requestMetadata")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property (readonly, getter=timeout_) SharedOkioTimeout *timeout __attribute__((swift_name("timeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKoin_coreModule : SharedBase
@property (readonly) SharedMutableSet<SharedKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<SharedKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) SharedMutableDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(SharedKotlinArray<SharedKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(SharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(SharedKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKoin_coreModule *> *)plusModule:(SharedKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(SharedKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<SharedKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (SharedKoin_coreKoinDefinition<id> *)singleQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKoin_coreKoinApplication : SharedBase
@property (class, readonly, getter=companion) SharedKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreKoinApplication *)loggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKoin_coreKoinApplication *)modulesModules:(SharedKotlinArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKoin_coreKoinApplication *)modulesModules__:(SharedKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKoin_coreKoinApplication *)printLoggerLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("State_keeperStateKeeper")))
@protocol SharedState_keeperStateKeeper
@required
- (id<SharedRuntimeParcelable> _Nullable)consumeKey:(NSString *)key clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("consume(key:clazz:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
- (id _Nullable)consumeKey:(NSString *)key strategy:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)strategy __attribute__((swift_name("consume(key:strategy:)")));
- (BOOL)isRegisteredKey:(NSString *)key __attribute__((swift_name("isRegistered(key:)")));
- (void)registerKey:(NSString *)key supplier:(id<SharedRuntimeParcelable> _Nullable (^)(void))supplier __attribute__((swift_name("register(key:supplier:)"))) __attribute__((deprecated("Parcelize compiler plugin will not work with KMP and K2 compiler. Please use similar API based on kotlinx-serialization.")));
- (void)registerKey:(NSString *)key strategy:(id<SharedKotlinx_serialization_coreSerializationStrategy>)strategy supplier:(id _Nullable (^)(void))supplier __attribute__((swift_name("register(key:strategy:supplier:)")));
- (void)unregisterKey:(NSString *)key __attribute__((swift_name("unregister(key:)")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeper")))
@protocol SharedInstance_keeperInstanceKeeper
@required
- (id<SharedInstance_keeperInstanceKeeperInstance> _Nullable)getKey:(id)key __attribute__((swift_name("get(key:)")));
- (void)putKey:(id)key instance:(id<SharedInstance_keeperInstanceKeeperInstance>)instance __attribute__((swift_name("put(key:instance:)")));
- (id<SharedInstance_keeperInstanceKeeperInstance> _Nullable)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
@end

__attribute__((swift_name("Back_handlerBackHandler")))
@protocol SharedBack_handlerBackHandler
@required
- (void)registerCallback:(SharedBack_handlerBackCallback *)callback __attribute__((swift_name("register(callback:)")));
- (void)unregisterCallback:(SharedBack_handlerBackCallback *)callback __attribute__((swift_name("unregister(callback:)")));
@end

__attribute__((swift_name("KotlinKCallable")))
@protocol SharedKotlinKCallable <SharedKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<SharedKotlinKType> returnType __attribute__((swift_name("returnType")));
@end

__attribute__((swift_name("KotlinKProperty")))
@protocol SharedKotlinKProperty <SharedKotlinKCallable>
@required
@end

__attribute__((swift_name("RuntimeParcelable")))
@protocol SharedRuntimeParcelable
@required
- (id<NSSecureCoding>)coding __attribute__((swift_name("coding()")));
@end

__attribute__((swift_name("ParcelableParcelableContainer")))
@protocol SharedParcelableParcelableContainer <SharedRuntimeParcelable>
@required
- (id<SharedRuntimeParcelable> _Nullable)consumeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("consume(clazz:)")));
- (void)setValue_:(id<SharedRuntimeParcelable> _Nullable)value __attribute__((swift_name("set(value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKoin_coreQualifier
@required
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface SharedKoin_coreParametersHolder : SharedBase
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) SharedBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(SharedBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (SharedKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface SharedKoin_coreLockable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKoin_coreScope : SharedKoin_coreLockable
@property (readonly) SharedStately_concurrencyThreadLocalRef<NSMutableArray<SharedKoin_coreParametersHolder *> *> *_parameterStackLocal __attribute__((swift_name("_parameterStackLocal")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<SharedKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKotlinArray<SharedKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreReceiveChannel")))
@protocol SharedKotlinx_coroutines_coreReceiveChannel
@required
- (void)cancelCause:(SharedKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<SharedKotlinx_coroutines_coreChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChannelIterator")))
@protocol SharedKotlinx_coroutines_coreChannelIterator
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSendChannel")))
@protocol SharedKotlinx_coroutines_coreSendChannel
@required
- (BOOL)closeCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(SharedKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<SharedKotlinx_coroutines_coreSelectClause2> onSend __attribute__((swift_name("onSend")));
@end

__attribute__((swift_name("Wire_runtimeMessageBuilder")))
@interface SharedWire_runtimeMessageBuilder<M, B> : SharedBase

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedWire_runtimeMessageBuilder<M, B> *)addUnknownFieldTag:(int32_t)tag fieldEncoding:(SharedWire_runtimeFieldEncoding *)fieldEncoding value:(id _Nullable)value __attribute__((swift_name("addUnknownField(tag:fieldEncoding:value:)")));
- (SharedWire_runtimeMessageBuilder<M, B> *)addUnknownFieldsUnknownFields:(SharedOkioByteString *)unknownFields __attribute__((swift_name("addUnknownFields(unknownFields:)")));
- (M)build __attribute__((swift_name("build()")));
- (SharedOkioByteString *)buildUnknownFields __attribute__((swift_name("buildUnknownFields()")));
- (SharedWire_runtimeMessageBuilder<M, B> *)clearUnknownFields __attribute__((swift_name("clearUnknownFields()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SharedKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SharedKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SharedKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SharedKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SharedKotlinx_coroutines_coreSelectClause0 <SharedKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface SharedKotlinx_serialization_corePolymorphicKind : SharedKotlinx_serialization_coreSerialKind
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface SharedKotlinx_serialization_corePrimitiveKind : SharedKotlinx_serialization_coreSerialKind
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface SharedKotlinx_serialization_coreSerialKindCONTEXTUAL : SharedKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface SharedKotlinx_serialization_coreSerialKindENUM : SharedKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface SharedKotlinx_serialization_coreStructureKind : SharedKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface SharedKotlinx_serialization_corePolymorphicKindOPEN : SharedKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface SharedKotlinx_serialization_corePolymorphicKindSEALED : SharedKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface SharedKotlinx_serialization_corePrimitiveKindBOOLEAN : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface SharedKotlinx_serialization_corePrimitiveKindBYTE : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface SharedKotlinx_serialization_corePrimitiveKindCHAR : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface SharedKotlinx_serialization_corePrimitiveKindDOUBLE : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface SharedKotlinx_serialization_corePrimitiveKindFLOAT : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface SharedKotlinx_serialization_corePrimitiveKindINT : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface SharedKotlinx_serialization_corePrimitiveKindLONG : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface SharedKotlinx_serialization_corePrimitiveKindSHORT : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface SharedKotlinx_serialization_corePrimitiveKindSTRING : SharedKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface SharedKotlinx_serialization_coreStructureKindCLASS : SharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface SharedKotlinx_serialization_coreStructureKindLIST : SharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface SharedKotlinx_serialization_coreStructureKindMAP : SharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface SharedKotlinx_serialization_coreStructureKindOBJECT : SharedKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SharedKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeFieldEncoding")))
@interface SharedWire_runtimeFieldEncoding : SharedKotlinEnum<SharedWire_runtimeFieldEncoding *>
@property (class, readonly, getter=companion) SharedWire_runtimeFieldEncodingCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedWire_runtimeFieldEncoding *varint __attribute__((swift_name("varint")));
@property (class, readonly) SharedWire_runtimeFieldEncoding *fixed64 __attribute__((swift_name("fixed64")));
@property (class, readonly) SharedWire_runtimeFieldEncoding *lengthDelimited __attribute__((swift_name("lengthDelimited")));
@property (class, readonly) SharedWire_runtimeFieldEncoding *fixed32 __attribute__((swift_name("fixed32")));
@property (class, readonly) NSArray<SharedWire_runtimeFieldEncoding *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedWire_runtimeFieldEncoding *> *)values __attribute__((swift_name("values()")));
- (SharedWire_runtimeProtoAdapter<id> *)rawProtoAdapter __attribute__((swift_name("rawProtoAdapter()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeSyntax")))
@interface SharedWire_runtimeSyntax : SharedKotlinEnum<SharedWire_runtimeSyntax *>
@property (class, readonly, getter=companion) SharedWire_runtimeSyntaxCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SharedWire_runtimeSyntax *proto2 __attribute__((swift_name("proto2")));
@property (class, readonly) SharedWire_runtimeSyntax *proto3 __attribute__((swift_name("proto3")));
@property (class, readonly) NSArray<SharedWire_runtimeSyntax *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedWire_runtimeSyntax *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeProtoAdapterCompanion")))
@interface SharedWire_runtimeProtoAdapterCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWire_runtimeProtoAdapterCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedBoolean *> *BOOL __attribute__((swift_name("BOOL")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedBoolean *> *BOOL_VALUE __attribute__((swift_name("BOOL_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedOkioByteString *> *BYTES __attribute__((swift_name("BYTES")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedOkioByteString *> *BYTES_VALUE __attribute__((swift_name("BYTES_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDouble *> *DOUBLE __attribute__((swift_name("DOUBLE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinDoubleArray *> *DOUBLE_ARRAY __attribute__((swift_name("DOUBLE_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedDouble *> *DOUBLE_VALUE __attribute__((swift_name("DOUBLE_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWire_runtimeDuration *> *DURATION __attribute__((swift_name("DURATION")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinUnit *> *EMPTY __attribute__((swift_name("EMPTY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *FIXED32 __attribute__((swift_name("FIXED32")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinIntArray *> *FIXED32_ARRAY __attribute__((swift_name("FIXED32_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *FIXED64 __attribute__((swift_name("FIXED64")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinLongArray *> *FIXED64_ARRAY __attribute__((swift_name("FIXED64_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedFloat *> *FLOAT __attribute__((swift_name("FLOAT")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinFloatArray *> *FLOAT_ARRAY __attribute__((swift_name("FLOAT_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedFloat *> *FLOAT_VALUE __attribute__((swift_name("FLOAT_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedWire_runtimeInstant *> *INSTANT __attribute__((swift_name("INSTANT")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *INT32 __attribute__((swift_name("INT32")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinIntArray *> *INT32_ARRAY __attribute__((swift_name("INT32_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *INT32_VALUE __attribute__((swift_name("INT32_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *INT64 __attribute__((swift_name("INT64")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinLongArray *> *INT64_ARRAY __attribute__((swift_name("INT64_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *INT64_VALUE __attribute__((swift_name("INT64_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *SFIXED32 __attribute__((swift_name("SFIXED32")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinIntArray *> *SFIXED32_ARRAY __attribute__((swift_name("SFIXED32_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *SFIXED64 __attribute__((swift_name("SFIXED64")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinLongArray *> *SFIXED64_ARRAY __attribute__((swift_name("SFIXED64_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *SINT32 __attribute__((swift_name("SINT32")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinIntArray *> *SINT32_ARRAY __attribute__((swift_name("SINT32_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *SINT64 __attribute__((swift_name("SINT64")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinLongArray *> *SINT64_ARRAY __attribute__((swift_name("SINT64_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<NSString *> *STRING __attribute__((swift_name("STRING")));
@property (readonly) SharedWire_runtimeProtoAdapter<NSString *> *STRING_VALUE __attribute__((swift_name("STRING_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<NSArray<id> *> *STRUCT_LIST __attribute__((swift_name("STRUCT_LIST")));
@property (readonly) SharedWire_runtimeProtoAdapter<NSDictionary<NSString *, id> *> *STRUCT_MAP __attribute__((swift_name("STRUCT_MAP")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinNothing *> *STRUCT_NULL __attribute__((swift_name("STRUCT_NULL")));
@property (readonly) SharedWire_runtimeProtoAdapter<id> *STRUCT_VALUE __attribute__((swift_name("STRUCT_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *UINT32 __attribute__((swift_name("UINT32")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinIntArray *> *UINT32_ARRAY __attribute__((swift_name("UINT32_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedInt *> *UINT32_VALUE __attribute__((swift_name("UINT32_VALUE")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *UINT64 __attribute__((swift_name("UINT64")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedKotlinLongArray *> *UINT64_ARRAY __attribute__((swift_name("UINT64_ARRAY")));
@property (readonly) SharedWire_runtimeProtoAdapter<SharedLong *> *UINT64_VALUE __attribute__((swift_name("UINT64_VALUE")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedWire_runtimeProtoAdapter<NSDictionary<id, id> *> *)doNewMapAdapterKeyAdapter:(SharedWire_runtimeProtoAdapter<id> *)keyAdapter valueAdapter:(SharedWire_runtimeProtoAdapter<id> *)valueAdapter __attribute__((swift_name("doNewMapAdapter(keyAdapter:valueAdapter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeProtoReader")))
@interface SharedWire_runtimeProtoReader : SharedBase
@property (class, readonly, getter=companion) SharedWire_runtimeProtoReaderCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithSource:(id<SharedOkioBufferedSource>)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (void)addUnknownFieldTag:(int32_t)tag fieldEncoding:(SharedWire_runtimeFieldEncoding *)fieldEncoding value:(id _Nullable)value __attribute__((swift_name("addUnknownField(tag:fieldEncoding:value:)")));
- (int64_t)beginMessage __attribute__((swift_name("beginMessage()")));
- (void)endMessageToken:(int64_t)token __attribute__((swift_name("endMessage(token:)"))) __attribute__((deprecated("prefer endMessageAndGetUnknownFields()")));
- (SharedOkioByteString *)endMessageAndGetUnknownFieldsToken:(int64_t)token __attribute__((swift_name("endMessageAndGetUnknownFields(token:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="-forEachTag")
*/
- (SharedOkioByteString *)forEachTagTagHandler:(id (^)(SharedInt *))tagHandler __attribute__((swift_name("forEachTag(tagHandler:)")));
- (int64_t)nextFieldMinLengthInBytes __attribute__((swift_name("nextFieldMinLengthInBytes()")));
- (int32_t)nextLengthDelimited __attribute__((swift_name("nextLengthDelimited()")));
- (int32_t)nextTag __attribute__((swift_name("nextTag()")));
- (SharedWire_runtimeFieldEncoding * _Nullable)peekFieldEncoding __attribute__((swift_name("peekFieldEncoding()")));
- (SharedOkioByteString *)readBytes __attribute__((swift_name("readBytes()")));
- (int32_t)readFixed32 __attribute__((swift_name("readFixed32()")));
- (int64_t)readFixed64 __attribute__((swift_name("readFixed64()")));
- (NSString *)readString __attribute__((swift_name("readString()")));
- (void)readUnknownFieldTag:(int32_t)tag __attribute__((swift_name("readUnknownField(tag:)")));
- (int32_t)readVarint32 __attribute__((swift_name("readVarint32()")));
- (int64_t)readVarint64 __attribute__((swift_name("readVarint64()")));
- (void)skip __attribute__((swift_name("skip()")));
@end

__attribute__((swift_name("OkioSource")))
@protocol SharedOkioSource <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end

__attribute__((swift_name("OkioBufferedSource")))
@protocol SharedOkioBufferedSource <SharedOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeProtoWriter")))
@interface SharedWire_runtimeProtoWriter : SharedBase
@property (class, readonly, getter=companion) SharedWire_runtimeProtoWriterCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithSink:(id<SharedOkioBufferedSink>)sink __attribute__((swift_name("init(sink:)"))) __attribute__((objc_designated_initializer));
- (void)writeBytesValue:(SharedOkioByteString *)value __attribute__((swift_name("writeBytes(value:)")));
- (void)writeFixed32Value:(int32_t)value __attribute__((swift_name("writeFixed32(value:)")));
- (void)writeFixed64Value:(int64_t)value __attribute__((swift_name("writeFixed64(value:)")));
- (void)writeStringValue:(NSString *)value __attribute__((swift_name("writeString(value:)")));
- (void)writeTagFieldNumber:(int32_t)fieldNumber fieldEncoding:(SharedWire_runtimeFieldEncoding *)fieldEncoding __attribute__((swift_name("writeTag(fieldNumber:fieldEncoding:)")));
- (void)writeVarint32Value:(int32_t)value __attribute__((swift_name("writeVarint32(value:)")));
- (void)writeVarint64Value:(int64_t)value __attribute__((swift_name("writeVarint64(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeReverseProtoWriter")))
@interface SharedWire_runtimeReverseProtoWriter : SharedBase
@property (readonly) int32_t byteCount __attribute__((swift_name("byteCount")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)writeBytesValue:(SharedOkioByteString *)value __attribute__((swift_name("writeBytes(value:)")));
- (void)writeFixed32Value:(int32_t)value __attribute__((swift_name("writeFixed32(value:)")));
- (void)writeFixed64Value:(int64_t)value __attribute__((swift_name("writeFixed64(value:)")));
- (void)writeStringValue:(NSString *)value __attribute__((swift_name("writeString(value:)")));
- (void)writeTagFieldNumber:(int32_t)fieldNumber fieldEncoding:(SharedWire_runtimeFieldEncoding *)fieldEncoding __attribute__((swift_name("writeTag(fieldNumber:fieldEncoding:)")));
- (void)writeToSink:(id<SharedOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
- (void)writeVarint32Value:(int32_t)value __attribute__((swift_name("writeVarint32(value:)")));
- (void)writeVarint64Value:(int64_t)value __attribute__((swift_name("writeVarint64(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface SharedOkioByteStringCompanion : SharedBase
@property (class, readonly, getter=shared) SharedOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (SharedOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (SharedOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (SharedOkioByteString *)ofData:(SharedKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (SharedOkioByteString *)toByteString:(NSData *)receiver __attribute__((swift_name("toByteString(_:)")));
- (SharedOkioByteString *)toByteString:(SharedKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface SharedOkioBuffer : SharedBase <SharedOkioBufferedSource, SharedOkioBufferedSink>
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (SharedOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (SharedOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (SharedOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (SharedOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (SharedOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (SharedOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (SharedOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (SharedOkioBuffer *)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (SharedOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (SharedOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (SharedOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (SharedOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (SharedOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (SharedOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (SharedOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (SharedOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (SharedOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (SharedOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@end

__attribute__((swift_name("OkioIOException")))
@interface SharedOkioIOException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("OkioTimeout")))
@interface SharedOkioTimeout : SharedBase
@property (class, readonly, getter=companion) SharedOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Wire_grpc_clientGrpcCallCallback")))
@protocol SharedWire_grpc_clientGrpcCallCallback
@required
- (void)onFailureCall:(id<SharedWire_grpc_clientGrpcCall>)call exception:(SharedOkioIOException *)exception __attribute__((swift_name("onFailure(call:exception:)")));
- (void)onSuccessCall:(id<SharedWire_grpc_clientGrpcCall>)call response:(id)response __attribute__((swift_name("onSuccess(call:response:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_grpc_clientGrpcMethod")))
@interface SharedWire_grpc_clientGrpcMethod<S, R> : SharedBase
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) SharedWire_runtimeProtoAdapter<S> *requestAdapter __attribute__((swift_name("requestAdapter")));
@property (readonly) SharedWire_runtimeProtoAdapter<R> *responseAdapter __attribute__((swift_name("responseAdapter")));
- (instancetype)initWithPath:(NSString *)path requestAdapter:(SharedWire_runtimeProtoAdapter<S> *)requestAdapter responseAdapter:(SharedWire_runtimeProtoAdapter<R> *)responseAdapter __attribute__((swift_name("init(path:requestAdapter:responseAdapter:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKotlinPair<__covariant A, __covariant B> : SharedBase
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end

__attribute__((swift_name("Wire_runtimeMessageSink")))
@protocol SharedWire_runtimeMessageSink
@required
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)close __attribute__((swift_name("close_()")));
- (void)writeMessage:(id)message __attribute__((swift_name("write(message:)")));
@end

__attribute__((swift_name("Wire_runtimeMessageSource")))
@protocol SharedWire_runtimeMessageSource
@required
- (void)close __attribute__((swift_name("close_()")));
- (id _Nullable)read __attribute__((swift_name("read()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface SharedKoin_coreKoinDefinition<R> : SharedBase
@property (readonly) SharedKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) SharedKoin_coreModule *module __attribute__((swift_name("module")));
- (instancetype)initWithModule:(SharedKoin_coreModule *)module factory:(SharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreKoinDefinition<R> *)doCopyModule:(SharedKoin_coreModule *)module factory:(SharedKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface SharedKoin_coreInstanceFactory<T> : SharedKoin_coreLockable
@property (class, readonly, getter=companion) SharedKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)createContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(SharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface SharedKoin_coreSingleInstanceFactory<T> : SharedKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKoin_coreScopeDSL : SharedBase
@property (readonly) SharedKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier module:(SharedKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (SharedKoin_coreKoinDefinition<id> *)scopedQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface SharedKoin_coreKoinApplicationCompanion : SharedBase
@property (class, readonly, getter=shared) SharedKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKoin_coreLogger : SharedBase
@property SharedKoin_coreLevel *level __attribute__((swift_name("level")));
- (instancetype)initWithLevel:(SharedKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(SharedKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(SharedKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(SharedKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKoin_coreLevel : SharedKotlinEnum<SharedKoin_coreLevel *>
@property (class, readonly) SharedKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKoin_coreLevel *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<SharedKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKoin_coreKoin : SharedBase
@property (readonly) SharedKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) SharedKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKoin_coreScope *)createScopeT:(id<SharedKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (SharedKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKotlinLazy>)injectQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKotlinLazy>)injectOrNullQualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier mode:(SharedKotlinLazyThreadSafetyMode *)mode parameters:(SharedKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@end

__attribute__((swift_name("Instance_keeperInstanceKeeperInstance")))
@protocol SharedInstance_keeperInstanceKeeperInstance
@required
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@end

__attribute__((swift_name("Back_handlerBackCallback")))
@interface SharedBack_handlerBackCallback : SharedBase
@property (class, readonly, getter=companion) SharedBack_handlerBackCallbackCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isEnabled __attribute__((swift_name("isEnabled")));
@property int32_t priority __attribute__((swift_name("priority")));
- (instancetype)initWithIsEnabled:(BOOL)isEnabled priority:(int32_t)priority __attribute__((swift_name("init(isEnabled:priority:)"))) __attribute__((objc_designated_initializer));
- (void)addEnabledChangedListenerListener:(void (^)(SharedBoolean *))listener __attribute__((swift_name("addEnabledChangedListener(listener:)")));
- (void)onBack __attribute__((swift_name("onBack()")));
- (void)onBackCancelled __attribute__((swift_name("onBackCancelled()")));
- (void)onBackProgressedBackEvent:(SharedBack_handlerBackEvent *)backEvent __attribute__((swift_name("onBackProgressed(backEvent:)")));
- (void)onBackStartedBackEvent:(SharedBack_handlerBackEvent *)backEvent __attribute__((swift_name("onBackStarted(backEvent:)")));
- (void)removeEnabledChangedListenerListener:(void (^)(SharedBoolean *))listener __attribute__((swift_name("removeEnabledChangedListener(listener:)")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SharedKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SharedKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SharedKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKotlinLazyThreadSafetyMode : SharedKotlinEnum<SharedKotlinLazyThreadSafetyMode *>
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
@property (class, readonly) NSArray<SharedKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Stately_concurrencyThreadLocalRef")))
@interface SharedStately_concurrencyThreadLocalRef<T> : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)get __attribute__((swift_name("get()")));
- (void)remove __attribute__((swift_name("remove()")));
- (void)setValue__:(T _Nullable)value __attribute__((swift_name("set(value_:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol SharedKotlinx_coroutines_coreSelectClause1 <SharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol SharedKotlinx_coroutines_coreSelectClause2 <SharedKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedKotlinUnit : SharedBase
@property (class, readonly, getter=shared) SharedKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SharedKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SharedKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeFieldEncoding.Companion")))
@interface SharedWire_runtimeFieldEncodingCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWire_runtimeFieldEncodingCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeSyntax.Companion")))
@interface SharedWire_runtimeSyntaxCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWire_runtimeSyntaxCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (SharedWire_runtimeSyntax *)getString:(NSString *)string __attribute__((swift_name("get(string:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface SharedKotlinDoubleArray : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedDouble *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeDuration")))
@interface SharedWire_runtimeDuration : SharedBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int32_t)getNano __attribute__((swift_name("getNano()")));
- (int64_t)getSeconds __attribute__((swift_name("getSeconds()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface SharedKotlinIntArray : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedInt *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface SharedKotlinLongArray : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedLong *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface SharedKotlinFloatArray : SharedBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedFloat *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeProtoReader.Companion")))
@interface SharedWire_runtimeProtoReaderCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWire_runtimeProtoReaderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Wire_runtimeProtoWriter.Companion")))
@interface SharedWire_runtimeProtoWriterCompanion : SharedBase
@property (class, readonly, getter=shared) SharedWire_runtimeProtoWriterCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface SharedOkioBufferUnsafeCursor : SharedBase <SharedOkioCloseable>
@property SharedOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property SharedKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface SharedOkioTimeoutCompanion : SharedBase
@property (class, readonly, getter=shared) SharedOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedOkioTimeout *NONE __attribute__((swift_name("NONE")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey_:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKotlinCoroutineContext>)plusContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKoin_coreBeanDefinition<T> : SharedBase
@property SharedKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) SharedKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<SharedKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<SharedKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
- (instancetype)initWithScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<SharedKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKotlinKClass>)primaryType qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKoin_coreScope *, SharedKoin_coreParametersHolder *))definition kind:(SharedKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKotlinKClass>)clazz qualifier:(id<SharedKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<SharedKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface SharedKoin_coreInstanceFactoryCompanion : SharedBase
@property (class, readonly, getter=shared) SharedKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface SharedKoin_coreInstanceContext : SharedBase
@property (readonly) SharedKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
- (instancetype)initWithLogger:(SharedKoin_coreLogger *)logger scope:(SharedKoin_coreScope *)scope parameters:(SharedKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKoin_coreKoinComponent
@required
- (SharedKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol SharedKoin_coreKoinScopeComponent <SharedKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()"))) __attribute__((deprecated("not used internaly anymore")));
@property (readonly) SharedKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface SharedKoin_coreExtensionManager : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<SharedKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<SharedKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<SharedKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface SharedKoin_coreInstanceRegistry : SharedBase
@property (readonly) SharedKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, SharedKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(SharedKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKoin_corePropertyRegistry : SharedBase
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKoin_coreScopeRegistry : SharedBase
@property (class, readonly, getter=companion) SharedKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SharedKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<SharedKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
- (instancetype)initWith_koin:(SharedKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)loadScopesModules:(NSSet<SharedKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackCallback.Companion")))
@interface SharedBack_handlerBackCallbackCompanion : SharedBase
@property (class, readonly, getter=shared) SharedBack_handlerBackCallbackCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t PRIORITY_DEFAULT __attribute__((swift_name("PRIORITY_DEFAULT")));
@property (readonly) int32_t PRIORITY_MAX __attribute__((swift_name("PRIORITY_MAX")));
@property (readonly) int32_t PRIORITY_MIN __attribute__((swift_name("PRIORITY_MIN")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackEvent")))
@interface SharedBack_handlerBackEvent : SharedBase
@property (readonly) float progress __attribute__((swift_name("progress")));
@property (readonly) SharedBack_handlerBackEventSwipeEdge *swipeEdge __attribute__((swift_name("swipeEdge")));
@property (readonly) float touchX __attribute__((swift_name("touchX")));
@property (readonly) float touchY __attribute__((swift_name("touchY")));
- (instancetype)initWithProgress:(float)progress swipeEdge:(SharedBack_handlerBackEventSwipeEdge *)swipeEdge touchX:(float)touchX touchY:(float)touchY __attribute__((swift_name("init(progress:swipeEdge:touchX:touchY:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SharedKotlinKTypeProjection : SharedBase
@property (class, readonly, getter=companion) SharedKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<SharedKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SharedKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
- (instancetype)initWithVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinKTypeProjection *)doCopyVariance:(SharedKotlinKVariance * _Nullable)variance type:(id<SharedKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SharedKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("KotlinDoubleIterator")))
@interface SharedKotlinDoubleIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKotlinIntIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface SharedKotlinLongIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface SharedKotlinFloatIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKoin_coreKind : SharedKotlinEnum<SharedKoin_coreKind *>
@property (class, readonly) SharedKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) SharedKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) SharedKoin_coreKind *scoped __attribute__((swift_name("scoped")));
@property (class, readonly) NSArray<SharedKoin_coreKind *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKoin_coreCallbacks<T> : SharedBase
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (SharedKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol SharedKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
@property SharedKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface SharedKoin_coreScopeRegistryCompanion : SharedBase
@property (class, readonly, getter=shared) SharedKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Back_handlerBackEvent.SwipeEdge")))
@interface SharedBack_handlerBackEventSwipeEdge : SharedKotlinEnum<SharedBack_handlerBackEventSwipeEdge *>
@property (class, readonly) SharedBack_handlerBackEventSwipeEdge *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedBack_handlerBackEventSwipeEdge *left __attribute__((swift_name("left")));
@property (class, readonly) SharedBack_handlerBackEventSwipeEdge *right __attribute__((swift_name("right")));
@property (class, readonly) NSArray<SharedBack_handlerBackEventSwipeEdge *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedBack_handlerBackEventSwipeEdge *> *)values __attribute__((swift_name("values()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SharedKotlinKVariance : SharedKotlinEnum<SharedKotlinKVariance *>
@property (class, readonly) SharedKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SharedKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SharedKotlinKVariance *out __attribute__((swift_name("out")));
@property (class, readonly) NSArray<SharedKotlinKVariance *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SharedKotlinArray<SharedKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SharedKotlinKTypeProjectionCompanion : SharedBase
@property (class, readonly, getter=shared) SharedKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)contravariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)covariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedKotlinKTypeProjection *)invariantType:(id<SharedKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass provider:(id<SharedKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
