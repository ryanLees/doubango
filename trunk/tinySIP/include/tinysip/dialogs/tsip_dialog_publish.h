/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou@yahoo.fr>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsip_dialog_publish.h
 * @brief SIP dialog PUBLISH as per RFC 3903.
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */
#ifndef TINYSIP_DIALOG_PUBLISH_H
#define TINYSIP_DIALOG_PUBLISH_H

#include "tinySIP_config.h"
#include "tinySIP/dialogs/tsip_dialog.h"

#include "tsk_fsm.h"

TSIP_BEGIN_DECLS

#define TSIP_DIALOG_PUBLISH_CREATE(stack, operation)		tsk_object_new(tsip_dialog_publish_def_t, (tsip_stack_handle_t *)stack, (tsip_operation_handle_t*) operation)

#define TSIP_DIALOG_PUBLISH(self)							((tsip_dialog_publish_t*)(self))

/** Type of refresh to perform.
*/
typedef enum refresh_type_e
{
	rt_initial,
	rt_timedout,
	rt_modify,
	rt_remove
}
refresh_type_t;

typedef struct tsip_dialog_publish
{
	TSIP_DECLARE_DIALOG;

	tsk_fsm_t *fsm;
		
	tsip_timer_t timerrefresh;
	tsip_timer_t timershutdown;

	tsk_bool_t unpublishing;
	char* etag;
	refresh_type_t last_rtype;
}
tsip_dialog_publish_t;

int tsip_dialog_publish_start(tsip_dialog_publish_t *self);
int tsip_dialog_publish_modify(tsip_dialog_publish_t *self);

TINYSIP_GEXTERN const void *tsip_dialog_publish_def_t;


TSIP_END_DECLS


#endif /* TINYSIP_DIALOG_PUBLISH_H */