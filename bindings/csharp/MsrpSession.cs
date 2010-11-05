/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.39
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace org.doubango.tinyWRAP {

using System;
using System.Runtime.InteropServices;

public class MsrpSession : InviteSession {
  private HandleRef swigCPtr;

  internal MsrpSession(IntPtr cPtr, bool cMemoryOwn) : base(tinyWRAPPINVOKE.MsrpSessionUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MsrpSession obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MsrpSession() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if(swigCPtr.Handle != IntPtr.Zero && swigCMemOwn) {
        swigCMemOwn = false;
        tinyWRAPPINVOKE.delete_MsrpSession(swigCPtr);
      }
      swigCPtr = new HandleRef(null, IntPtr.Zero);
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public MsrpSession(SipStack Stack, MsrpCallback callback) : this(tinyWRAPPINVOKE.new_MsrpSession(SipStack.getCPtr(Stack), MsrpCallback.getCPtr(callback)), true) {
  }

  public bool setCallback(MsrpCallback callback) {
    bool ret = tinyWRAPPINVOKE.MsrpSession_setCallback(swigCPtr, MsrpCallback.getCPtr(callback));
    return ret;
  }

  public bool callMsrp(string remoteUri, ActionConfig config) {
    bool ret = tinyWRAPPINVOKE.MsrpSession_callMsrp__SWIG_0(swigCPtr, remoteUri, ActionConfig.getCPtr(config));
    return ret;
  }

  public bool callMsrp(string remoteUri) {
    bool ret = tinyWRAPPINVOKE.MsrpSession_callMsrp__SWIG_1(swigCPtr, remoteUri);
    return ret;
  }

  public bool sendLMessage(ActionConfig config) {
    bool ret = tinyWRAPPINVOKE.MsrpSession_sendLMessage__SWIG_0(swigCPtr, ActionConfig.getCPtr(config));
    return ret;
  }

  public bool sendLMessage() {
    bool ret = tinyWRAPPINVOKE.MsrpSession_sendLMessage__SWIG_1(swigCPtr);
    return ret;
  }

  public bool sendFile(ActionConfig config) {
    bool ret = tinyWRAPPINVOKE.MsrpSession_sendFile__SWIG_0(swigCPtr, ActionConfig.getCPtr(config));
    return ret;
  }

  public bool sendFile() {
    bool ret = tinyWRAPPINVOKE.MsrpSession_sendFile__SWIG_1(swigCPtr);
    return ret;
  }

}

}
