/* pkcs11-deleter.c generated by valac 0.25.4, the Vala compiler
 * generated from pkcs11-deleter.vala, do not modify */

/*
 * Seahorse
 *
 * Copyright (C) 2013 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Author: Stef Walter <stefw@redhat.com>
 */

#include <glib.h>
#include <glib-object.h>
#include "seahorse-pkcs11.h"
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include "seahorse-common.h"
#include <gck/gck.h>
#include <gio/gio.h>
#include <p11-kit/pkcs11.h>

#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))
typedef struct _SeahorsePkcs11DeleterDeleteData SeahorsePkcs11DeleterDeleteData;

struct _SeahorsePkcs11DeleterDeleteData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	SeahorsePkcs11Deleter* self;
	GCancellable* cancellable;
	gboolean result;
	GList* objects;
	GList* _tmp0_;
	GList* _tmp1_;
	GList* _tmp2_;
	GList* object_collection;
	GList* object_it;
	GckObject* object;
	GckObject* _tmp3_;
	GCancellable* _tmp4_;
	SeahorsePkcs11Token* token;
	GckObject* _tmp5_;
	SeahorsePkcs11Token* _tmp6_;
	SeahorsePkcs11Token* _tmp7_;
	GckObject* _tmp8_;
	GError* e;
	gboolean _tmp9_;
	GError* _tmp10_;
	GQuark _tmp11_;
	GQuark _tmp12_;
	GError* _tmp13_;
	gint _tmp14_;
	GError* _tmp15_;
	GError* _tmp16_;
	GError * _inner_error_;
};


static gpointer seahorse_pkcs11_deleter_parent_class = NULL;

enum  {
	SEAHORSE_PKCS11_DELETER_DUMMY_PROPERTY
};
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
static GtkDialog* seahorse_pkcs11_deleter_real_create_confirm (SeahorseDeleter* base, GtkWindow* parent);
static GList* seahorse_pkcs11_deleter_real_get_objects (SeahorseDeleter* base);
static gboolean seahorse_pkcs11_deleter_real_add_object (SeahorseDeleter* base, GObject* obj);
static void seahorse_pkcs11_deleter_real_delete_data_free (gpointer _data);
static void seahorse_pkcs11_deleter_real_delete (SeahorseDeleter* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean seahorse_pkcs11_deleter_real_delete_co (SeahorsePkcs11DeleterDeleteData* _data_);
static void seahorse_pkcs11_deleter_delete_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void seahorse_pkcs11_deleter_finalize (GObject* obj);


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


static GtkDialog* seahorse_pkcs11_deleter_real_create_confirm (SeahorseDeleter* base, GtkWindow* parent) {
	SeahorsePkcs11Deleter * self;
	GtkDialog* result = NULL;
	guint num = 0U;
	GList* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	guint _tmp2_ = 0U;
	self = (SeahorsePkcs11Deleter*) base;
	_tmp0_ = self->objects;
	_tmp1_ = g_list_length (_tmp0_);
	num = _tmp1_;
	_tmp2_ = num;
	if (_tmp2_ == ((guint) 1)) {
		gchar* label = NULL;
		GList* _tmp3_ = NULL;
		gconstpointer _tmp4_ = NULL;
		GtkWindow* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		SeahorseDeleteDialog* _tmp8_ = NULL;
		_tmp3_ = self->objects;
		_tmp4_ = _tmp3_->data;
		g_object_get ((GObject*) ((GckObject*) _tmp4_), "label", &label, NULL);
		_tmp5_ = parent;
		_tmp6_ = _ ("Are you sure you want to permanently delete %s?");
		_tmp7_ = label;
		_tmp8_ = (SeahorseDeleteDialog*) seahorse_delete_dialog_new (_tmp5_, _tmp6_, _tmp7_, NULL);
		g_object_ref_sink (_tmp8_);
		result = (GtkDialog*) _tmp8_;
		_g_free0 (label);
		return result;
	} else {
		GtkWindow* _tmp9_ = NULL;
		guint _tmp10_ = 0U;
		const gchar* _tmp11_ = NULL;
		guint _tmp12_ = 0U;
		SeahorseDeleteDialog* _tmp13_ = NULL;
		_tmp9_ = parent;
		_tmp10_ = num;
		_tmp11_ = ngettext ("Are you sure you want to permanently delete %d certificate?", "Are you sure you want to permanently delete %d certificates?", (gulong) _tmp10_);
		_tmp12_ = num;
		_tmp13_ = (SeahorseDeleteDialog*) seahorse_delete_dialog_new (_tmp9_, _tmp11_, _tmp12_, NULL);
		g_object_ref_sink (_tmp13_);
		result = (GtkDialog*) _tmp13_;
		return result;
	}
}


SeahorsePkcs11Deleter* seahorse_pkcs11_deleter_construct (GType object_type, GckObject* object) {
	SeahorsePkcs11Deleter * self = NULL;
	GckObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	g_return_val_if_fail (object != NULL, NULL);
	self = (SeahorsePkcs11Deleter*) seahorse_deleter_construct (object_type);
	_tmp0_ = object;
	_tmp1_ = seahorse_deleter_add_object ((SeahorseDeleter*) self, (GObject*) _tmp0_);
	if (!_tmp1_) {
		g_assert_not_reached ();
	}
	return self;
}


SeahorsePkcs11Deleter* seahorse_pkcs11_deleter_new (GckObject* object) {
	return seahorse_pkcs11_deleter_construct (SEAHORSE_PKCS11_TYPE_DELETER, object);
}


static GList* seahorse_pkcs11_deleter_real_get_objects (SeahorseDeleter* base) {
	SeahorsePkcs11Deleter * self;
	GList* result = NULL;
	GList* _tmp0_ = NULL;
	self = (SeahorsePkcs11Deleter*) base;
	_tmp0_ = self->objects;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gboolean seahorse_pkcs11_deleter_real_add_object (SeahorseDeleter* base, GObject* obj) {
	SeahorsePkcs11Deleter * self;
	gboolean result = FALSE;
	GObject* _tmp0_ = NULL;
	self = (SeahorsePkcs11Deleter*) base;
	g_return_val_if_fail (obj != NULL, FALSE);
	_tmp0_ = obj;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, SEAHORSE_PKCS11_TYPE_CERTIFICATE)) {
		GObject* _tmp1_ = NULL;
		GckObject* _tmp2_ = NULL;
		_tmp1_ = obj;
		_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, gck_object_get_type (), GckObject));
		self->objects = g_list_append (self->objects, _tmp2_);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


static void seahorse_pkcs11_deleter_real_delete_data_free (gpointer _data) {
	SeahorsePkcs11DeleterDeleteData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->self);
	g_slice_free (SeahorsePkcs11DeleterDeleteData, _data_);
}


static void seahorse_pkcs11_deleter_real_delete (SeahorseDeleter* base, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	SeahorsePkcs11Deleter * self;
	SeahorsePkcs11DeleterDeleteData* _data_;
	SeahorsePkcs11Deleter* _tmp0_ = NULL;
	GCancellable* _tmp1_ = NULL;
	GCancellable* _tmp2_ = NULL;
	self = (SeahorsePkcs11Deleter*) base;
	_data_ = g_slice_new0 (SeahorsePkcs11DeleterDeleteData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, seahorse_pkcs11_deleter_real_delete);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, seahorse_pkcs11_deleter_real_delete_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = cancellable;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp2_;
	seahorse_pkcs11_deleter_real_delete_co (_data_);
}


static gboolean seahorse_pkcs11_deleter_real_delete_finish (SeahorseDeleter* base, GAsyncResult* _res_, GError** error) {
	gboolean result;
	SeahorsePkcs11DeleterDeleteData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return FALSE;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	return result;
}


static void seahorse_pkcs11_deleter_delete_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	SeahorsePkcs11DeleterDeleteData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	seahorse_pkcs11_deleter_real_delete_co (_data_);
}


static gpointer _g_error_copy0 (gpointer self) {
	return self ? g_error_copy (self) : NULL;
}


static gboolean seahorse_pkcs11_deleter_real_delete_co (SeahorsePkcs11DeleterDeleteData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _data_->self->objects;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = g_list_copy (_data_->_tmp0_);
	_data_->objects = _data_->_tmp1_;
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = _data_->objects;
	{
		_data_->object_collection = _data_->_tmp2_;
		for (_data_->object_it = _data_->object_collection; _data_->object_it != NULL; _data_->object_it = _data_->object_it->next) {
			_data_->object = (GckObject*) _data_->object_it->data;
			{
				{
					_data_->_tmp3_ = NULL;
					_data_->_tmp3_ = _data_->object;
					_data_->_tmp4_ = NULL;
					_data_->_tmp4_ = _data_->cancellable;
					_data_->_state_ = 1;
					gck_object_destroy_async (_data_->_tmp3_, _data_->_tmp4_, seahorse_pkcs11_deleter_delete_ready, _data_);
					return FALSE;
					_state_1:
					gck_object_destroy_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
					if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
						goto __catch0_g_error;
					}
					_data_->_tmp5_ = NULL;
					_data_->_tmp5_ = _data_->object;
					g_object_get ((GObject*) _data_->_tmp5_, "place", &_data_->token, NULL);
					_data_->_tmp6_ = NULL;
					_data_->_tmp6_ = _data_->token;
					if (_data_->_tmp6_ != NULL) {
						_data_->_tmp7_ = NULL;
						_data_->_tmp7_ = _data_->token;
						_data_->_tmp8_ = NULL;
						_data_->_tmp8_ = _data_->object;
						seahorse_pkcs11_token_remove_object (_data_->_tmp7_, _data_->_tmp8_);
					}
					_g_object_unref0 (_data_->token);
				}
				goto __finally0;
				__catch0_g_error:
				{
					_data_->e = _data_->_inner_error_;
					_data_->_inner_error_ = NULL;
					_data_->_tmp10_ = NULL;
					_data_->_tmp10_ = _data_->e;
					_data_->_tmp11_ = 0U;
					_data_->_tmp11_ = _data_->_tmp10_->domain;
					_data_->_tmp12_ = 0U;
					_data_->_tmp12_ = gck_error_get_quark ();
					if (_data_->_tmp11_ != _data_->_tmp12_) {
						_data_->_tmp9_ = TRUE;
					} else {
						_data_->_tmp13_ = NULL;
						_data_->_tmp13_ = _data_->e;
						_data_->_tmp14_ = 0;
						_data_->_tmp14_ = _data_->_tmp13_->code;
						_data_->_tmp9_ = ((gulong) _data_->_tmp14_) != CKR_OBJECT_HANDLE_INVALID;
					}
					if (_data_->_tmp9_) {
						_data_->_tmp15_ = NULL;
						_data_->_tmp15_ = _data_->e;
						_data_->_tmp16_ = NULL;
						_data_->_tmp16_ = _g_error_copy0 (_data_->_tmp15_);
						_data_->_inner_error_ = _data_->_tmp16_;
						_g_error_free0 (_data_->e);
						goto __finally0;
					}
					_g_error_free0 (_data_->e);
				}
				__finally0:
				if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
					g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
					g_error_free (_data_->_inner_error_);
					_g_list_free0 (_data_->objects);
					if (_data_->_state_ == 0) {
						g_simple_async_result_complete_in_idle (_data_->_async_result);
					} else {
						g_simple_async_result_complete (_data_->_async_result);
					}
					g_object_unref (_data_->_async_result);
					return FALSE;
				}
			}
		}
	}
	_data_->result = TRUE;
	_g_list_free0 (_data_->objects);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	_g_list_free0 (_data_->objects);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void seahorse_pkcs11_deleter_class_init (SeahorsePkcs11DeleterClass * klass) {
	seahorse_pkcs11_deleter_parent_class = g_type_class_peek_parent (klass);
	((SeahorseDeleterClass *) klass)->create_confirm = seahorse_pkcs11_deleter_real_create_confirm;
	((SeahorseDeleterClass *) klass)->get_objects = seahorse_pkcs11_deleter_real_get_objects;
	((SeahorseDeleterClass *) klass)->add_object = seahorse_pkcs11_deleter_real_add_object;
	((SeahorseDeleterClass *) klass)->delete = seahorse_pkcs11_deleter_real_delete;
	((SeahorseDeleterClass *) klass)->delete_finish = seahorse_pkcs11_deleter_real_delete_finish;
	G_OBJECT_CLASS (klass)->finalize = seahorse_pkcs11_deleter_finalize;
}


static void seahorse_pkcs11_deleter_instance_init (SeahorsePkcs11Deleter * self) {
}


static void seahorse_pkcs11_deleter_finalize (GObject* obj) {
	SeahorsePkcs11Deleter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_PKCS11_TYPE_DELETER, SeahorsePkcs11Deleter);
	__g_list_free__g_object_unref0_0 (self->objects);
	G_OBJECT_CLASS (seahorse_pkcs11_deleter_parent_class)->finalize (obj);
}


GType seahorse_pkcs11_deleter_get_type (void) {
	static volatile gsize seahorse_pkcs11_deleter_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_pkcs11_deleter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SeahorsePkcs11DeleterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seahorse_pkcs11_deleter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeahorsePkcs11Deleter), 0, (GInstanceInitFunc) seahorse_pkcs11_deleter_instance_init, NULL };
		GType seahorse_pkcs11_deleter_type_id;
		seahorse_pkcs11_deleter_type_id = g_type_register_static (SEAHORSE_TYPE_DELETER, "SeahorsePkcs11Deleter", &g_define_type_info, 0);
		g_once_init_leave (&seahorse_pkcs11_deleter_type_id__volatile, seahorse_pkcs11_deleter_type_id);
	}
	return seahorse_pkcs11_deleter_type_id__volatile;
}


