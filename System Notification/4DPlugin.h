/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : System Notification
 #	author : miyako
 #	2016/04/15
 #
 # --------------------------------------------------------------------------------*/



// --- Notification
void SN_Set_method(sLONG_PTR *pResult, PackagePtr pParams);
void SN_Get_method(sLONG_PTR *pResult, PackagePtr pParams);

//messaging functions
void listenerInit(void);
void listenerLoop(void);
void listenerLoopStart(void);
void listenerLoopFinish(void);
void listenerLoopExecute(void);

//internal variables
typedef PA_long32 process_number_t;
typedef PA_long32 process_stack_size_t;
typedef PA_long32 method_id_t;
typedef PA_long32 event_id_t;
typedef PA_Unichar* process_name_t;

#if VERSIONMAC
#include <IOKit/ps/IOPowerSources.h>
#include <IOKit/ps/IOPSKeys.h>
#import <objc/runtime.h>
@interface Listener : NSObject
{

}
- (id)init;
- (void)dealloc;
- (void)willSleep:(NSNotification *)notification;
- (void)didWake:(NSNotification *)notification;
- (void)screensDidSleep:(NSNotification *)notification;
- (void)screensDidWake:(NSNotification *)notification;
- (void)willPowerOff:(NSNotification *)notification;
- (void)call:(event_id_t)event;
@end
#else
#include "Shlwapi.h"
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "Rpcrt4.lib")
#endif