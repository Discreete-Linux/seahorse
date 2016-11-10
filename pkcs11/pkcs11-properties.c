/* pkcs11-properties.c generated by valac 0.25.4, the Vala compiler
 * generated from pkcs11-properties.vala, do not modify */

/*
 * Seahorse
 *
 * Copyright (C) 2008 Stefan Walter
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
#include <gck/gck.h>
#include <gtk/gtk.h>
#include <ui/gcr-ui.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include "seahorse-common.h"
#include <gcr/gcr-base.h>
#include "config.h"

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_GckAttributes_free0(var) ((var == NULL) ? NULL : (var = (_vala_GckAttributes_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
typedef struct _Block1Data Block1Data;

#define SEAHORSE_PKCS11_TYPE_KEY_DELETER (seahorse_pkcs11_key_deleter_get_type ())
#define SEAHORSE_PKCS11_KEY_DELETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_PKCS11_TYPE_KEY_DELETER, SeahorsePkcs11KeyDeleter))
#define SEAHORSE_PKCS11_KEY_DELETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_PKCS11_TYPE_KEY_DELETER, SeahorsePkcs11KeyDeleterClass))
#define SEAHORSE_PKCS11_IS_KEY_DELETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_PKCS11_TYPE_KEY_DELETER))
#define SEAHORSE_PKCS11_IS_KEY_DELETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_PKCS11_TYPE_KEY_DELETER))
#define SEAHORSE_PKCS11_KEY_DELETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_PKCS11_TYPE_KEY_DELETER, SeahorsePkcs11KeyDeleterClass))

typedef struct _SeahorsePkcs11KeyDeleter SeahorsePkcs11KeyDeleter;
typedef struct _SeahorsePkcs11KeyDeleterClass SeahorsePkcs11KeyDeleterClass;
typedef struct _Block2Data Block2Data;

struct _SeahorsePkcs11PropertiesPrivate {
	GckObject* _object;
	GtkBox* _content;
	GcrViewer* _viewer;
	GCancellable* _cancellable;
	GckObject* _request_key;
	GtkUIManager* _ui_manager;
	GtkActionGroup* _actions;
};

struct _Block1Data {
	int _ref_count_;
	SeahorsePkcs11Properties* self;
	SeahorsePkcs11Deleter* deleter;
};

struct _Block2Data {
	int _ref_count_;
	SeahorsePkcs11Properties* self;
	GObject* object;
};


static gpointer seahorse_pkcs11_properties_parent_class = NULL;
static gchar* seahorse_pkcs11_properties_UI_STRING;
static gchar* seahorse_pkcs11_properties_UI_STRING = NULL;

#define SEAHORSE_PKCS11_PROPERTIES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SEAHORSE_PKCS11_TYPE_PROPERTIES, SeahorsePkcs11PropertiesPrivate))
enum  {
	SEAHORSE_PKCS11_PROPERTIES_DUMMY_PROPERTY,
	SEAHORSE_PKCS11_PROPERTIES_OBJECT
};
static void seahorse_pkcs11_properties_on_export_certificate (SeahorsePkcs11Properties* self, GtkAction* action);
static void _seahorse_pkcs11_properties_on_export_certificate_gtk_action_callback (GtkAction* action, gpointer self);
static void seahorse_pkcs11_properties_on_delete_objects (SeahorsePkcs11Properties* self, GtkAction* action);
static void _seahorse_pkcs11_properties_on_delete_objects_gtk_action_callback (GtkAction* action, gpointer self);
static void seahorse_pkcs11_properties_on_request_certificate (SeahorsePkcs11Properties* self, GtkAction* action);
static void _seahorse_pkcs11_properties_on_request_certificate_gtk_action_callback (GtkAction* action, gpointer self);
static void seahorse_pkcs11_properties_real_dispose (GObject* base);
static void seahorse_pkcs11_properties_update_label (SeahorsePkcs11Properties* self);
static void seahorse_pkcs11_properties_add_renderer_for_object (SeahorsePkcs11Properties* self, GObject* object);
static void _vala_GckAttributes_free (GckAttributes* self);
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
SeahorsePkcs11KeyDeleter* seahorse_pkcs11_key_deleter_new (GckObject* cert_or_key);
SeahorsePkcs11KeyDeleter* seahorse_pkcs11_key_deleter_construct (GType object_type, GckObject* cert_or_key);
GType seahorse_pkcs11_key_deleter_get_type (void) G_GNUC_CONST;
static void ___lambda4_ (Block1Data* _data1_, GObject* obj, GAsyncResult* res);
static void ____lambda4__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
static void seahorse_pkcs11_properties_check_certificate_request_capable (SeahorsePkcs11Properties* self, GObject* object);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
static void __lambda8_ (Block2Data* _data2_, GObject* obj, GAsyncResult* res);
static void ___lambda8__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
static GObject * seahorse_pkcs11_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void _seahorse_pkcs11_properties___lambda9_ (SeahorsePkcs11Properties* self, GtkWidget* widget);
static void __seahorse_pkcs11_properties___lambda9__gtk_ui_manager_add_widget (GtkUIManager* _sender, GtkWidget* widget, gpointer self);
static void _seahorse_pkcs11_properties___lambda10_ (SeahorsePkcs11Properties* self);
static void __seahorse_pkcs11_properties___lambda10__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void seahorse_pkcs11_properties_finalize (GObject* obj);
static void _vala_seahorse_pkcs11_properties_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_seahorse_pkcs11_properties_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);

static const GtkActionEntry SEAHORSE_PKCS11_PROPERTIES_UI_ACTIONS[3] = {{"export-object", GTK_STOCK_SAVE_AS, "_Export", "", "Export the certificate", (GCallback) _seahorse_pkcs11_properties_on_export_certificate_gtk_action_callback}, {"delete-object", GTK_STOCK_DELETE, "_Delete", "<Ctrl>Delete", "Delete this certificate or key", (GCallback) _seahorse_pkcs11_properties_on_delete_objects_gtk_action_callback}, {"request-certificate", NULL, "Request _Certificate", NULL, "Create a certificate request file for this key", (GCallback) _seahorse_pkcs11_properties_on_request_certificate_gtk_action_callback}};

static void _seahorse_pkcs11_properties_on_export_certificate_gtk_action_callback (GtkAction* action, gpointer self) {
	seahorse_pkcs11_properties_on_export_certificate ((SeahorsePkcs11Properties*) self, action);
}


static void _seahorse_pkcs11_properties_on_delete_objects_gtk_action_callback (GtkAction* action, gpointer self) {
	seahorse_pkcs11_properties_on_delete_objects ((SeahorsePkcs11Properties*) self, action);
}


static void _seahorse_pkcs11_properties_on_request_certificate_gtk_action_callback (GtkAction* action, gpointer self) {
	seahorse_pkcs11_properties_on_request_certificate ((SeahorsePkcs11Properties*) self, action);
}


SeahorsePkcs11Properties* seahorse_pkcs11_properties_construct (GType object_type, GckObject* object, GtkWindow* window) {
	SeahorsePkcs11Properties * self = NULL;
	GckObject* _tmp0_ = NULL;
	GtkWindow* _tmp1_ = NULL;
	g_return_val_if_fail (object != NULL, NULL);
	g_return_val_if_fail (window != NULL, NULL);
	_tmp0_ = object;
	_tmp1_ = window;
	self = (SeahorsePkcs11Properties*) g_object_new (object_type, "object", _tmp0_, "transient-for", _tmp1_, NULL);
	return self;
}


SeahorsePkcs11Properties* seahorse_pkcs11_properties_new (GckObject* object, GtkWindow* window) {
	return seahorse_pkcs11_properties_construct (SEAHORSE_PKCS11_TYPE_PROPERTIES, object, window);
}


static void seahorse_pkcs11_properties_real_dispose (GObject* base) {
	SeahorsePkcs11Properties * self;
	GCancellable* _tmp0_ = NULL;
	self = (SeahorsePkcs11Properties*) base;
	_tmp0_ = self->priv->_cancellable;
	g_cancellable_cancel (_tmp0_);
	G_OBJECT_CLASS (seahorse_pkcs11_properties_parent_class)->dispose ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_window_get_type (), GtkWindow));
}


static void seahorse_pkcs11_properties_update_label (SeahorsePkcs11Properties* self) {
	gchar* label = NULL;
	gchar* description = NULL;
	GckObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_object;
	g_object_get ((GObject*) _tmp0_, "label", &label, "description", &description, NULL);
	_tmp2_ = label;
	if (_tmp2_ == NULL) {
		_tmp1_ = TRUE;
	} else {
		const gchar* _tmp3_ = NULL;
		_tmp3_ = label;
		_tmp1_ = g_strcmp0 (_tmp3_, "") == 0;
	}
	if (_tmp1_) {
		const gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		_tmp4_ = _ ("Unnamed");
		_tmp5_ = g_strdup (_tmp4_);
		_g_free0 (label);
		label = _tmp5_;
	}
	_tmp6_ = label;
	_tmp7_ = description;
	_tmp8_ = g_strdup_printf ("%s - %s", _tmp6_, _tmp7_);
	_tmp9_ = _tmp8_;
	gtk_window_set_title ((GtkWindow*) self, _tmp9_);
	_g_free0 (_tmp9_);
	_g_free0 (description);
	_g_free0 (label);
}


static void _vala_GckAttributes_free (GckAttributes* self) {
	g_boxed_free (gck_attributes_get_type (), self);
}


static void seahorse_pkcs11_properties_add_renderer_for_object (SeahorsePkcs11Properties* self, GObject* object) {
	GckAttributes* attributes = NULL;
	gchar* label = NULL;
	GObject* _tmp0_ = NULL;
	GckAttributes* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (object != NULL);
	attributes = NULL;
	label = NULL;
	_tmp0_ = object;
	g_object_get (_tmp0_, "label", &label, "attributes", &attributes, NULL);
	_tmp1_ = attributes;
	if (_tmp1_ != NULL) {
		GcrRenderer* renderer = NULL;
		const gchar* _tmp2_ = NULL;
		GckAttributes* _tmp3_ = NULL;
		GcrRenderer* _tmp4_ = NULL;
		GcrRenderer* _tmp5_ = NULL;
		_tmp2_ = label;
		_tmp3_ = attributes;
		_tmp4_ = gcr_renderer_create (_tmp2_, _tmp3_);
		renderer = _tmp4_;
		_tmp5_ = renderer;
		if (_tmp5_ != NULL) {
			GObject* _tmp6_ = NULL;
			GcrRenderer* _tmp7_ = NULL;
			GObject* _tmp8_ = NULL;
			GcrRenderer* _tmp9_ = NULL;
			GcrRenderer* _tmp10_ = NULL;
			GObjectClass* _tmp11_ = NULL;
			GParamSpec* _tmp12_ = NULL;
			GcrViewer* _tmp15_ = NULL;
			GcrRenderer* _tmp16_ = NULL;
			_tmp6_ = object;
			_tmp7_ = renderer;
			g_object_bind_property_with_closures (_tmp6_, "label", (GObject*) _tmp7_, "label", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)));
			_tmp8_ = object;
			_tmp9_ = renderer;
			g_object_bind_property_with_closures (_tmp8_, "attributes", (GObject*) _tmp9_, "attributes", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)));
			_tmp10_ = renderer;
			_tmp11_ = G_OBJECT_GET_CLASS ((GObject*) _tmp10_);
			_tmp12_ = g_object_class_find_property (_tmp11_, "object");
			if (_tmp12_ != NULL) {
				GcrRenderer* _tmp13_ = NULL;
				GObject* _tmp14_ = NULL;
				_tmp13_ = renderer;
				_tmp14_ = object;
				g_object_set ((GObject*) _tmp13_, "object", _tmp14_, NULL);
			}
			_tmp15_ = self->priv->_viewer;
			_tmp16_ = renderer;
			gcr_viewer_add_renderer (_tmp15_, _tmp16_);
		}
		_g_object_unref0 (renderer);
	}
	_g_free0 (label);
	__vala_GckAttributes_free0 (attributes);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


static void seahorse_pkcs11_properties_on_export_certificate (SeahorsePkcs11Properties* self, GtkAction* action) {
	GList* objects = NULL;
	GckObject* _tmp0_ = NULL;
	GObject* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (action != NULL);
	objects = NULL;
	_tmp0_ = self->priv->_object;
	_tmp1_ = _g_object_ref0 ((GObject*) _tmp0_);
	objects = g_list_append (objects, _tmp1_);
	{
		seahorse_exportable_export_to_prompt_wait (objects, (GtkWindow*) self, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch1_g_error;
		}
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* err = NULL;
		const gchar* _tmp2_ = NULL;
		GError* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp2_ = _ ("Failed to export certificate");
		_tmp3_ = err;
		_tmp4_ = _tmp3_->message;
		seahorse_util_show_error ((GtkWidget*) self, _tmp2_, _tmp4_);
		_g_error_free0 (err);
	}
	__finally1:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		__g_list_free__g_object_unref0_0 (objects);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	__g_list_free__g_object_unref0_0 (objects);
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		SeahorsePkcs11Properties* self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->deleter);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void ___lambda4_ (Block1Data* _data1_, GObject* obj, GAsyncResult* res) {
	SeahorsePkcs11Properties* self;
	GError * _inner_error_ = NULL;
	self = _data1_->self;
	g_return_if_fail (res != NULL);
	{
		gboolean _tmp0_ = FALSE;
		SeahorsePkcs11Deleter* _tmp1_ = NULL;
		GAsyncResult* _tmp2_ = NULL;
		gboolean _tmp3_ = FALSE;
		_tmp1_ = _data1_->deleter;
		_tmp2_ = res;
		_tmp3_ = seahorse_deleter_delete_finish ((SeahorseDeleter*) _tmp1_, _tmp2_, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch2_g_error;
		}
		if (_tmp0_) {
			gtk_widget_destroy ((GtkWidget*) self);
		}
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* err = NULL;
		const gchar* _tmp4_ = NULL;
		GError* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp4_ = _ ("Couldn't delete");
		_tmp5_ = err;
		_tmp6_ = _tmp5_->message;
		seahorse_util_show_error ((GtkWidget*) self, _tmp4_, _tmp6_);
		_g_error_free0 (err);
	}
	__finally2:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void ____lambda4__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
	___lambda4_ (self, source_object, res);
	block1_data_unref (self);
}


static void seahorse_pkcs11_properties_on_delete_objects (SeahorsePkcs11Properties* self, GtkAction* action) {
	Block1Data* _data1_;
	GObject* partner = NULL;
	GckObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	GObject* _tmp2_ = NULL;
	SeahorsePkcs11Deleter* _tmp11_ = NULL;
	gboolean _tmp12_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (action != NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	_tmp0_ = self->priv->_object;
	g_object_get ((GObject*) _tmp0_, "partner", &partner, NULL);
	_tmp2_ = partner;
	if (_tmp2_ != NULL) {
		_tmp1_ = TRUE;
	} else {
		GckObject* _tmp3_ = NULL;
		_tmp3_ = self->priv->_object;
		_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, SEAHORSE_PKCS11_TYPE_PRIVATE_KEY);
	}
	if (_tmp1_) {
		GckObject* _tmp4_ = NULL;
		SeahorsePkcs11KeyDeleter* _tmp5_ = NULL;
		SeahorsePkcs11Deleter* _tmp6_ = NULL;
		GObject* _tmp7_ = NULL;
		gboolean _tmp8_ = FALSE;
		_tmp4_ = self->priv->_object;
		_tmp5_ = seahorse_pkcs11_key_deleter_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp4_, gck_object_get_type (), GckObject));
		_g_object_unref0 (_data1_->deleter);
		_data1_->deleter = (SeahorsePkcs11Deleter*) _tmp5_;
		_tmp6_ = _data1_->deleter;
		_tmp7_ = partner;
		_tmp8_ = seahorse_deleter_add_object ((SeahorseDeleter*) _tmp6_, _tmp7_);
		if (!_tmp8_) {
			g_assert_not_reached ();
		}
	} else {
		GckObject* _tmp9_ = NULL;
		SeahorsePkcs11Deleter* _tmp10_ = NULL;
		_tmp9_ = self->priv->_object;
		_tmp10_ = seahorse_pkcs11_deleter_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, gck_object_get_type (), GckObject));
		_g_object_unref0 (_data1_->deleter);
		_data1_->deleter = _tmp10_;
	}
	_tmp11_ = _data1_->deleter;
	_tmp12_ = seahorse_deleter_prompt ((SeahorseDeleter*) _tmp11_, (GtkWindow*) self);
	if (_tmp12_) {
		SeahorsePkcs11Deleter* _tmp13_ = NULL;
		GCancellable* _tmp14_ = NULL;
		_tmp13_ = _data1_->deleter;
		_tmp14_ = self->priv->_cancellable;
		seahorse_deleter_delete ((SeahorseDeleter*) _tmp13_, _tmp14_, ____lambda4__gasync_ready_callback, block1_data_ref (_data1_));
	}
	_g_object_unref0 (partner);
	block1_data_unref (_data1_);
	_data1_ = NULL;
}


static void seahorse_pkcs11_properties_on_request_certificate (SeahorsePkcs11Properties* self, GtkAction* action) {
	GckObject* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (action != NULL);
	_tmp0_ = self->priv->_request_key;
	seahorse_pkcs11_request_prompt ((GtkWindow*) self, _tmp0_);
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		SeahorsePkcs11Properties* self;
		self = _data2_->self;
		_g_object_unref0 (_data2_->object);
		_g_object_unref0 (self);
		g_slice_free (Block2Data, _data2_);
	}
}


static void __lambda8_ (Block2Data* _data2_, GObject* obj, GAsyncResult* res) {
	SeahorsePkcs11Properties* self;
	GError * _inner_error_ = NULL;
	self = _data2_->self;
	g_return_if_fail (res != NULL);
	{
		gboolean _tmp0_ = FALSE;
		GAsyncResult* _tmp1_ = NULL;
		gboolean _tmp2_ = FALSE;
		_tmp1_ = res;
		_tmp2_ = gcr_certificate_request_capable_finish (_tmp1_, &_inner_error_);
		_tmp0_ = _tmp2_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch3_g_error;
		}
		if (_tmp0_) {
			GtkAction* request = NULL;
			GtkActionGroup* _tmp3_ = NULL;
			GtkAction* _tmp4_ = NULL;
			GtkAction* _tmp5_ = NULL;
			GtkAction* _tmp6_ = NULL;
			GObject* _tmp7_ = NULL;
			GckObject* _tmp8_ = NULL;
			_tmp3_ = self->priv->_actions;
			_tmp4_ = gtk_action_group_get_action (_tmp3_, "request-certificate");
			_tmp5_ = _g_object_ref0 (_tmp4_);
			request = _tmp5_;
			_tmp6_ = request;
			gtk_action_set_visible (_tmp6_, TRUE);
			_tmp7_ = _data2_->object;
			_tmp8_ = _g_object_ref0 ((GckObject*) G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, SEAHORSE_PKCS11_TYPE_PRIVATE_KEY, SeahorsePkcs11PrivateKey));
			_g_object_unref0 (self->priv->_request_key);
			self->priv->_request_key = _tmp8_;
			_g_object_unref0 (request);
		}
	}
	goto __finally3;
	__catch3_g_error:
	{
		GError* err = NULL;
		GError* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp9_ = err;
		_tmp10_ = _tmp9_->message;
		g_message ("pkcs11-properties.vala:219: couldn't check capabilities of private key" \
": %s", _tmp10_);
		_g_error_free0 (err);
	}
	__finally3:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void ___lambda8__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
	__lambda8_ (self, source_object, res);
	block2_data_unref (self);
}


static void seahorse_pkcs11_properties_check_certificate_request_capable (SeahorsePkcs11Properties* self, GObject* object) {
	Block2Data* _data2_;
	GObject* _tmp0_ = NULL;
	GObject* _tmp1_ = NULL;
	GObject* _tmp2_ = NULL;
	GObject* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (object != NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->self = g_object_ref (self);
	_tmp0_ = object;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data2_->object);
	_data2_->object = _tmp1_;
	_tmp2_ = _data2_->object;
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, SEAHORSE_PKCS11_TYPE_PRIVATE_KEY)) {
		block2_data_unref (_data2_);
		_data2_ = NULL;
		return;
	}
	_tmp3_ = _data2_->object;
	_tmp4_ = self->priv->_cancellable;
	gcr_certificate_request_capable_async ((GckObject*) G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, SEAHORSE_PKCS11_TYPE_PRIVATE_KEY, SeahorsePkcs11PrivateKey), _tmp4_, ___lambda8__gasync_ready_callback, block2_data_ref (_data2_));
	block2_data_unref (_data2_);
	_data2_ = NULL;
}


GckObject* seahorse_pkcs11_properties_get_object (SeahorsePkcs11Properties* self) {
	GckObject* result;
	GckObject* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_object;
	result = _tmp0_;
	return result;
}


static void seahorse_pkcs11_properties_set_object (SeahorsePkcs11Properties* self, GckObject* value) {
	GckObject* _tmp0_ = NULL;
	GckObject* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_object);
	self->priv->_object = _tmp1_;
	g_object_notify ((GObject *) self, "object");
}


static void _seahorse_pkcs11_properties___lambda9_ (SeahorsePkcs11Properties* self, GtkWidget* widget) {
	GtkWidget* _tmp0_ = NULL;
	GtkBox* _tmp1_ = NULL;
	GtkWidget* _tmp2_ = NULL;
	GtkBox* _tmp3_ = NULL;
	GtkWidget* _tmp4_ = NULL;
	GtkWidget* _tmp5_ = NULL;
	GtkStyleContext* _tmp6_ = NULL;
	GtkWidget* _tmp7_ = NULL;
	GtkWidget* _tmp8_ = NULL;
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, gtk_toolbar_get_type ())) {
		return;
	}
	_tmp1_ = self->priv->_content;
	_tmp2_ = widget;
	gtk_box_pack_start (_tmp1_, _tmp2_, FALSE, TRUE, (guint) 0);
	_tmp3_ = self->priv->_content;
	_tmp4_ = widget;
	gtk_box_reorder_child (_tmp3_, _tmp4_, 0);
	_tmp5_ = widget;
	_tmp6_ = gtk_widget_get_style_context (_tmp5_);
	gtk_style_context_add_class (_tmp6_, GTK_STYLE_CLASS_PRIMARY_TOOLBAR);
	_tmp7_ = widget;
	gtk_widget_reset_style (_tmp7_);
	_tmp8_ = widget;
	gtk_widget_show (_tmp8_);
}


static void __seahorse_pkcs11_properties___lambda9__gtk_ui_manager_add_widget (GtkUIManager* _sender, GtkWidget* widget, gpointer self) {
	_seahorse_pkcs11_properties___lambda9_ ((SeahorsePkcs11Properties*) self, widget);
}


static void _seahorse_pkcs11_properties___lambda10_ (SeahorsePkcs11Properties* self) {
	seahorse_pkcs11_properties_update_label (self);
}


static void __seahorse_pkcs11_properties___lambda10__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
	_seahorse_pkcs11_properties___lambda10_ ((SeahorsePkcs11Properties*) self);
}


static GObject * seahorse_pkcs11_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	SeahorsePkcs11Properties * self;
	GCancellable* _tmp0_ = NULL;
	GtkBox* _tmp1_ = NULL;
	GtkBox* _tmp2_ = NULL;
	GtkBox* _tmp3_ = NULL;
	GcrViewer* _tmp4_ = NULL;
	GcrViewer* _tmp5_ = NULL;
	GtkBox* _tmp6_ = NULL;
	GcrViewer* _tmp7_ = NULL;
	GcrViewer* _tmp8_ = NULL;
	GcrViewer* _tmp9_ = NULL;
	GcrViewer* _tmp10_ = NULL;
	GtkActionGroup* _tmp11_ = NULL;
	GtkActionGroup* _tmp12_ = NULL;
	GtkActionGroup* _tmp13_ = NULL;
	GtkAction* action = NULL;
	GtkActionGroup* _tmp14_ = NULL;
	GtkAction* _tmp15_ = NULL;
	GtkAction* _tmp16_ = NULL;
	GckObject* _tmp17_ = NULL;
	GtkAction* _tmp18_ = NULL;
	GtkActionGroup* _tmp19_ = NULL;
	GtkAction* _tmp20_ = NULL;
	GtkAction* _tmp21_ = NULL;
	GckObject* _tmp22_ = NULL;
	GtkAction* _tmp23_ = NULL;
	GtkAction* request = NULL;
	GtkActionGroup* _tmp24_ = NULL;
	GtkAction* _tmp25_ = NULL;
	GtkAction* _tmp26_ = NULL;
	GtkAction* _tmp27_ = NULL;
	GtkAction* _tmp28_ = NULL;
	GtkUIManager* _tmp29_ = NULL;
	GtkUIManager* _tmp30_ = NULL;
	GtkActionGroup* _tmp31_ = NULL;
	GtkUIManager* _tmp32_ = NULL;
	GtkUIManager* _tmp37_ = NULL;
	GckObject* _tmp38_ = NULL;
	GckObject* _tmp39_ = NULL;
	GckObject* _tmp40_ = NULL;
	GObject* partner = NULL;
	GckObject* _tmp41_ = NULL;
	GObject* _tmp42_ = NULL;
	GList* exporters = NULL;
	GckObject* _tmp45_ = NULL;
	GtkAction* export = NULL;
	GtkActionGroup* _tmp48_ = NULL;
	GtkAction* _tmp49_ = NULL;
	GtkAction* _tmp50_ = NULL;
	GtkAction* _tmp51_ = NULL;
	GList* _tmp52_ = NULL;
	GcrViewer* _tmp53_ = NULL;
	GError * _inner_error_ = NULL;
	parent_class = G_OBJECT_CLASS (seahorse_pkcs11_properties_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_PKCS11_TYPE_PROPERTIES, SeahorsePkcs11Properties);
	_tmp0_ = g_cancellable_new ();
	_g_object_unref0 (self->priv->_cancellable);
	self->priv->_cancellable = _tmp0_;
	gtk_window_set_default_size ((GtkWindow*) self, 400, 400);
	_tmp1_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
	g_object_ref_sink (_tmp1_);
	_g_object_unref0 (self->priv->_content);
	self->priv->_content = _tmp1_;
	_tmp2_ = self->priv->_content;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp2_);
	_tmp3_ = self->priv->_content;
	gtk_widget_show ((GtkWidget*) _tmp3_);
	_tmp4_ = gcr_viewer_new_scrolled ();
	_tmp5_ = _g_object_ref0 (_tmp4_);
	_g_object_unref0 (self->priv->_viewer);
	self->priv->_viewer = _tmp5_;
	_tmp6_ = self->priv->_content;
	_tmp7_ = self->priv->_viewer;
	gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) _tmp7_);
	_tmp8_ = self->priv->_viewer;
	gtk_widget_set_hexpand ((GtkWidget*) _tmp8_, TRUE);
	_tmp9_ = self->priv->_viewer;
	gtk_widget_set_vexpand ((GtkWidget*) _tmp9_, TRUE);
	_tmp10_ = self->priv->_viewer;
	gtk_widget_show ((GtkWidget*) _tmp10_);
	_tmp11_ = gtk_action_group_new ("Pkcs11Actions");
	_g_object_unref0 (self->priv->_actions);
	self->priv->_actions = _tmp11_;
	_tmp12_ = self->priv->_actions;
	gtk_action_group_set_translation_domain (_tmp12_, GETTEXT_PACKAGE);
	_tmp13_ = self->priv->_actions;
	gtk_action_group_add_actions (_tmp13_, SEAHORSE_PKCS11_PROPERTIES_UI_ACTIONS, G_N_ELEMENTS (SEAHORSE_PKCS11_PROPERTIES_UI_ACTIONS), self);
	_tmp14_ = self->priv->_actions;
	_tmp15_ = gtk_action_group_get_action (_tmp14_, "delete-object");
	_tmp16_ = _g_object_ref0 (_tmp15_);
	action = _tmp16_;
	_tmp17_ = self->priv->_object;
	_tmp18_ = action;
	g_object_bind_property_with_closures ((GObject*) _tmp17_, "deletable", (GObject*) _tmp18_, "sensitive", G_BINDING_SYNC_CREATE, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)));
	_tmp19_ = self->priv->_actions;
	_tmp20_ = gtk_action_group_get_action (_tmp19_, "export-object");
	_tmp21_ = _g_object_ref0 (_tmp20_);
	_g_object_unref0 (action);
	action = _tmp21_;
	_tmp22_ = self->priv->_object;
	_tmp23_ = action;
	g_object_bind_property_with_closures ((GObject*) _tmp22_, "exportable", (GObject*) _tmp23_, "sensitive", G_BINDING_SYNC_CREATE, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, NULL)));
	_tmp24_ = self->priv->_actions;
	_tmp25_ = gtk_action_group_get_action (_tmp24_, "request-certificate");
	_tmp26_ = _g_object_ref0 (_tmp25_);
	request = _tmp26_;
	_tmp27_ = request;
	gtk_action_set_is_important (_tmp27_, TRUE);
	_tmp28_ = request;
	gtk_action_set_visible (_tmp28_, FALSE);
	_tmp29_ = gtk_ui_manager_new ();
	_g_object_unref0 (self->priv->_ui_manager);
	self->priv->_ui_manager = _tmp29_;
	_tmp30_ = self->priv->_ui_manager;
	_tmp31_ = self->priv->_actions;
	gtk_ui_manager_insert_action_group (_tmp30_, _tmp31_, 0);
	_tmp32_ = self->priv->_ui_manager;
	g_signal_connect_object (_tmp32_, "add-widget", (GCallback) __seahorse_pkcs11_properties___lambda9__gtk_ui_manager_add_widget, self, 0);
	{
		GtkUIManager* _tmp33_ = NULL;
		const gchar* _tmp34_ = NULL;
		_tmp33_ = self->priv->_ui_manager;
		_tmp34_ = seahorse_pkcs11_properties_UI_STRING;
		gtk_ui_manager_add_ui_from_string (_tmp33_, _tmp34_, (gssize) (-1), &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			goto __catch4_g_error;
		}
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* err = NULL;
		GError* _tmp35_ = NULL;
		const gchar* _tmp36_ = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp35_ = err;
		_tmp36_ = _tmp35_->message;
		g_critical ("pkcs11-properties.vala:98: %s", _tmp36_);
		_g_error_free0 (err);
	}
	__finally4:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_g_object_unref0 (request);
		_g_object_unref0 (action);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
	}
	_tmp37_ = self->priv->_ui_manager;
	gtk_ui_manager_ensure_update (_tmp37_);
	_tmp38_ = self->priv->_object;
	g_signal_connect_object ((GObject*) _tmp38_, "notify::label", (GCallback) __seahorse_pkcs11_properties___lambda10__g_object_notify, self, 0);
	seahorse_pkcs11_properties_update_label (self);
	_tmp39_ = self->priv->_object;
	seahorse_pkcs11_properties_add_renderer_for_object (self, (GObject*) _tmp39_);
	_tmp40_ = self->priv->_object;
	seahorse_pkcs11_properties_check_certificate_request_capable (self, (GObject*) _tmp40_);
	_tmp41_ = self->priv->_object;
	g_object_get ((GObject*) _tmp41_, "partner", &partner, NULL);
	_tmp42_ = partner;
	if (_tmp42_ != NULL) {
		GObject* _tmp43_ = NULL;
		GObject* _tmp44_ = NULL;
		_tmp43_ = partner;
		seahorse_pkcs11_properties_add_renderer_for_object (self, _tmp43_);
		_tmp44_ = partner;
		seahorse_pkcs11_properties_check_certificate_request_capable (self, _tmp44_);
	}
	_tmp45_ = self->priv->_object;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp45_, SEAHORSE_TYPE_EXPORTABLE)) {
		GckObject* _tmp46_ = NULL;
		GList* _tmp47_ = NULL;
		_tmp46_ = self->priv->_object;
		_tmp47_ = seahorse_exportable_create_exporters (G_TYPE_CHECK_INSTANCE_CAST (_tmp46_, SEAHORSE_TYPE_EXPORTABLE, SeahorseExportable), SEAHORSE_EXPORTER_TYPE_ANY);
		__g_list_free__g_object_unref0_0 (exporters);
		exporters = _tmp47_;
	}
	_tmp48_ = self->priv->_actions;
	_tmp49_ = gtk_action_group_get_action (_tmp48_, "export-object");
	_tmp50_ = _g_object_ref0 (_tmp49_);
	export = _tmp50_;
	_tmp51_ = export;
	_tmp52_ = exporters;
	gtk_action_set_visible (_tmp51_, _tmp52_ != NULL);
	_tmp53_ = self->priv->_viewer;
	gtk_widget_grab_focus ((GtkWidget*) _tmp53_);
	_g_object_unref0 (export);
	__g_list_free__g_object_unref0_0 (exporters);
	_g_object_unref0 (partner);
	_g_object_unref0 (request);
	_g_object_unref0 (action);
	return obj;
}


static void seahorse_pkcs11_properties_class_init (SeahorsePkcs11PropertiesClass * klass) {
	gchar* _tmp0_ = NULL;
	seahorse_pkcs11_properties_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SeahorsePkcs11PropertiesPrivate));
	((GObjectClass *) klass)->dispose = seahorse_pkcs11_properties_real_dispose;
	G_OBJECT_CLASS (klass)->get_property = _vala_seahorse_pkcs11_properties_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_seahorse_pkcs11_properties_set_property;
	G_OBJECT_CLASS (klass)->constructor = seahorse_pkcs11_properties_constructor;
	G_OBJECT_CLASS (klass)->finalize = seahorse_pkcs11_properties_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAHORSE_PKCS11_PROPERTIES_OBJECT, g_param_spec_object ("object", "object", "object", gck_object_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	_tmp0_ = g_strdup ("<ui>\n" \
"\t\t\t<toolbar name='Toolbar'>\n" \
"\t\t\t\t<toolitem action='export-object'/>\n" \
"\t\t\t\t<toolitem action='delete-object'/>\n" \
"\t\t\t\t<separator name='MiddleSeparator' expand='true'/>\n" \
"\t\t\t\t<toolitem action='request-certificate'/>\n" \
"\t\t\t</toolbar>\n" \
"\t\t</ui>");
	seahorse_pkcs11_properties_UI_STRING = _tmp0_;
}


static void seahorse_pkcs11_properties_instance_init (SeahorsePkcs11Properties * self) {
	self->priv = SEAHORSE_PKCS11_PROPERTIES_GET_PRIVATE (self);
}


static void seahorse_pkcs11_properties_finalize (GObject* obj) {
	SeahorsePkcs11Properties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_PKCS11_TYPE_PROPERTIES, SeahorsePkcs11Properties);
	_g_object_unref0 (self->priv->_object);
	_g_object_unref0 (self->priv->_content);
	_g_object_unref0 (self->priv->_viewer);
	_g_object_unref0 (self->priv->_cancellable);
	_g_object_unref0 (self->priv->_request_key);
	_g_object_unref0 (self->priv->_ui_manager);
	_g_object_unref0 (self->priv->_actions);
	G_OBJECT_CLASS (seahorse_pkcs11_properties_parent_class)->finalize (obj);
}


GType seahorse_pkcs11_properties_get_type (void) {
	static volatile gsize seahorse_pkcs11_properties_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_pkcs11_properties_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SeahorsePkcs11PropertiesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seahorse_pkcs11_properties_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeahorsePkcs11Properties), 0, (GInstanceInitFunc) seahorse_pkcs11_properties_instance_init, NULL };
		GType seahorse_pkcs11_properties_type_id;
		seahorse_pkcs11_properties_type_id = g_type_register_static (gtk_window_get_type (), "SeahorsePkcs11Properties", &g_define_type_info, 0);
		g_once_init_leave (&seahorse_pkcs11_properties_type_id__volatile, seahorse_pkcs11_properties_type_id);
	}
	return seahorse_pkcs11_properties_type_id__volatile;
}


static void _vala_seahorse_pkcs11_properties_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SeahorsePkcs11Properties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SEAHORSE_PKCS11_TYPE_PROPERTIES, SeahorsePkcs11Properties);
	switch (property_id) {
		case SEAHORSE_PKCS11_PROPERTIES_OBJECT:
		g_value_set_object (value, seahorse_pkcs11_properties_get_object (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_seahorse_pkcs11_properties_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SeahorsePkcs11Properties * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SEAHORSE_PKCS11_TYPE_PROPERTIES, SeahorsePkcs11Properties);
	switch (property_id) {
		case SEAHORSE_PKCS11_PROPERTIES_OBJECT:
		seahorse_pkcs11_properties_set_object (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



