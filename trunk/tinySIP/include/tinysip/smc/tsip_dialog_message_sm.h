/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : tsip_dialog_message.sm
 */

#ifndef _H_TSIP_DIALOG_MESSAGE_SM
#define _H_TSIP_DIALOG_MESSAGE_SM

#include <statemap.h>


struct tsip_dialog_message;
struct tsip_dialog_messageContext;

struct tsip_dialog_messageState
{
    void(*Entry)(struct tsip_dialog_messageContext*);

    void(*sm_1xx)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_2xx)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_300_to_699)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_401_407_421_494)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_accept)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_cancel)(struct tsip_dialog_messageContext*);
    void(*sm_error)(struct tsip_dialog_messageContext*);
    void(*sm_receive)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_reject)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_send)(struct tsip_dialog_messageContext*, const tsip_message_t*);
    void(*sm_transportError)(struct tsip_dialog_messageContext*);

    void(*Default)(struct tsip_dialog_messageContext*);

    STATE_MEMBERS
};

extern const struct tsip_dialog_messageState tsip_dialog_message_Started;
extern const struct tsip_dialog_messageState tsip_dialog_message_Sending;
extern const struct tsip_dialog_messageState tsip_dialog_message_Receiving;
extern const struct tsip_dialog_messageState tsip_dialog_message_Terminated;

struct tsip_dialog_messageContext
{
    FSM_MEMBERS(tsip_dialog_message)
    struct tsip_dialog_message *_owner;
};

extern void tsip_dialog_messageContext_Init(struct tsip_dialog_messageContext*, struct tsip_dialog_message*);
extern void tsip_dialog_messageContext_EnterStartState(struct tsip_dialog_messageContext*);
extern void tsip_dialog_messageContext_sm_1xx(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_2xx(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_300_to_699(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_401_407_421_494(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_accept(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_cancel(struct tsip_dialog_messageContext*);
extern void tsip_dialog_messageContext_sm_error(struct tsip_dialog_messageContext*);
extern void tsip_dialog_messageContext_sm_receive(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_reject(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_send(struct tsip_dialog_messageContext*, const tsip_message_t*);
extern void tsip_dialog_messageContext_sm_transportError(struct tsip_dialog_messageContext*);

#endif

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
