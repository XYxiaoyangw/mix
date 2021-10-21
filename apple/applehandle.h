#ifndef __APPLE_HANDLE_H_INCLUDE__
#define __APPLE_HANDLE_H_INCLUDE__

#ifdef __cplusplus
extern "C" {
#endif
int  GetInstance(int *handle);
void ReleaseInstance(int *handle);
extern void SetColor(int handle, int color);
extern int GetColor(int handle);
#ifdef __cplusplus
};
#endif
#endif  //  #define __APPLE_HANDLE_H_INCLUDE__