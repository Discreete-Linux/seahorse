/* lockable.c generated by valac 0.25.4, the Vala compiler
 * generated from lockable.vala, do not modify */

/*
 * Seahorse
 *
 * Copyright (C) 2004,2005 Stefan Walter
 * Copyright (C) 2011 Collabora Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include "seahorse-common.h"
#include <gio/gio.h>






void seahorse_lockable_lock (SeahorseLockable* self, GTlsInteraction* interaction, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	SEAHORSE_LOCKABLE_GET_INTERFACE (self)->lock (self, interaction, cancellable, _callback_, _user_data_);
}


gboolean seahorse_lockable_lock_finish (SeahorseLockable* self, GAsyncResult* _res_, GError** error) {
	return SEAHORSE_LOCKABLE_GET_INTERFACE (self)->lock_finish (self, _res_, error);
}


void seahorse_lockable_unlock (SeahorseLockable* self, GTlsInteraction* interaction, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	SEAHORSE_LOCKABLE_GET_INTERFACE (self)->unlock (self, interaction, cancellable, _callback_, _user_data_);
}


gboolean seahorse_lockable_unlock_finish (SeahorseLockable* self, GAsyncResult* _res_, GError** error) {
	return SEAHORSE_LOCKABLE_GET_INTERFACE (self)->unlock_finish (self, _res_, error);
}


gboolean seahorse_lockable_can_lock (GObject* object) {
	gboolean result = FALSE;
	GObject* _tmp0_ = NULL;
	g_return_val_if_fail (object != NULL, FALSE);
	_tmp0_ = object;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, SEAHORSE_TYPE_LOCKABLE)) {
		GObject* _tmp1_ = NULL;
		gboolean _tmp2_ = FALSE;
		gboolean _tmp3_ = FALSE;
		_tmp1_ = object;
		_tmp2_ = seahorse_lockable_get_lockable (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, SEAHORSE_TYPE_LOCKABLE, SeahorseLockable));
		_tmp3_ = _tmp2_;
		result = _tmp3_;
		return result;
	}
	result = FALSE;
	return result;
}


gboolean seahorse_lockable_can_unlock (GObject* object) {
	gboolean result = FALSE;
	GObject* _tmp0_ = NULL;
	g_return_val_if_fail (object != NULL, FALSE);
	_tmp0_ = object;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, SEAHORSE_TYPE_LOCKABLE)) {
		GObject* _tmp1_ = NULL;
		gboolean _tmp2_ = FALSE;
		gboolean _tmp3_ = FALSE;
		_tmp1_ = object;
		_tmp2_ = seahorse_lockable_get_unlockable (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, SEAHORSE_TYPE_LOCKABLE, SeahorseLockable));
		_tmp3_ = _tmp2_;
		result = _tmp3_;
		return result;
	}
	result = FALSE;
	return result;
}


gboolean seahorse_lockable_get_lockable (SeahorseLockable* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return SEAHORSE_LOCKABLE_GET_INTERFACE (self)->get_lockable (self);
}


gboolean seahorse_lockable_get_unlockable (SeahorseLockable* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return SEAHORSE_LOCKABLE_GET_INTERFACE (self)->get_unlockable (self);
}


static void seahorse_lockable_base_init (SeahorseLockableIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_object_interface_install_property (iface, g_param_spec_boolean ("lockable", "lockable", "lockable", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
		g_object_interface_install_property (iface, g_param_spec_boolean ("unlockable", "unlockable", "unlockable", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	}
}


GType seahorse_lockable_get_type (void) {
	static volatile gsize seahorse_lockable_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_lockable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SeahorseLockableIface), (GBaseInitFunc) seahorse_lockable_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType seahorse_lockable_type_id;
		seahorse_lockable_type_id = g_type_register_static (G_TYPE_INTERFACE, "SeahorseLockable", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (seahorse_lockable_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&seahorse_lockable_type_id__volatile, seahorse_lockable_type_id);
	}
	return seahorse_lockable_type_id__volatile;
}



