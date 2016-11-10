/* gkr-dialogs.c generated by valac 0.25.4, the Vala compiler
 * generated from gkr-dialogs.vala, do not modify */

/*
 * Seahorse
 *
 * Copyright (C) 2009 Stefan Walter
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
 * License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include "seahorse-gkr.h"
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <gdk/gdk.h>
#include <gobject/gvaluecollector.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _SeahorseGkrParamSpecDialog SeahorseGkrParamSpecDialog;

struct _SeahorseGkrParamSpecDialog {
	GParamSpec parent_instance;
};


static gpointer seahorse_gkr_dialog_parent_class = NULL;

enum  {
	SEAHORSE_GKR_DIALOG_DUMMY_PROPERTY
};
static void seahorse_gkr_dialog_update_wait_cursor (GtkWidget* widget);
static void __lambda8_ (void* data);
static void ___lambda8__gdestroy_notify (void* data);
static void _seahorse_gkr_dialog_update_wait_cursor_gtk_widget_realize (GtkWidget* _sender, gpointer self);
static void seahorse_gkr_dialog_finalize (SeahorseGkrDialog* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void seahorse_gkr_dialog_update_wait_cursor (GtkWidget* widget) {
	GCancellable* cancellable = NULL;
	GtkWidget* _tmp0_ = NULL;
	gconstpointer _tmp1_ = NULL;
	GCancellable* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GdkCursor* cursor = NULL;
	GtkWidget* _tmp6_ = NULL;
	gconstpointer _tmp7_ = NULL;
	GdkCursor* _tmp8_ = NULL;
	GdkCursor* _tmp9_ = NULL;
	GtkWidget* _tmp14_ = NULL;
	GdkWindow* _tmp15_ = NULL;
	GdkCursor* _tmp16_ = NULL;
	g_return_if_fail (widget != NULL);
	_tmp0_ = widget;
	_tmp1_ = g_object_get_data ((GObject*) _tmp0_, "gkr-request");
	_tmp2_ = _g_object_ref0 ((GCancellable*) _tmp1_);
	cancellable = _tmp2_;
	_tmp3_ = cancellable;
	if (_tmp3_ == NULL) {
		GtkWidget* _tmp4_ = NULL;
		GdkWindow* _tmp5_ = NULL;
		_tmp4_ = widget;
		_tmp5_ = gtk_widget_get_window (_tmp4_);
		gdk_window_set_cursor (_tmp5_, NULL);
		_g_object_unref0 (cancellable);
		return;
	}
	_tmp6_ = widget;
	_tmp7_ = g_object_get_data ((GObject*) _tmp6_, "wait-cursor");
	_tmp8_ = _g_object_ref0 ((GdkCursor*) _tmp7_);
	cursor = _tmp8_;
	_tmp9_ = cursor;
	if (_tmp9_ == NULL) {
		GdkCursor* _tmp10_ = NULL;
		GtkWidget* _tmp11_ = NULL;
		GdkCursor* _tmp12_ = NULL;
		GdkCursor* _tmp13_ = NULL;
		_tmp10_ = gdk_cursor_new (GDK_WATCH);
		_g_object_unref0 (cursor);
		cursor = _tmp10_;
		_tmp11_ = widget;
		_tmp12_ = cursor;
		_tmp13_ = _g_object_ref0 (_tmp12_);
		g_object_set_data_full ((GObject*) _tmp11_, "wait-cursor", _tmp13_, g_object_unref);
	}
	_tmp14_ = widget;
	_tmp15_ = gtk_widget_get_window (_tmp14_);
	_tmp16_ = cursor;
	gdk_window_set_cursor (_tmp15_, _tmp16_);
	_g_object_unref0 (cursor);
	_g_object_unref0 (cancellable);
}


static void __lambda8_ (void* data) {
	GCancellable* c = NULL;
	void* _tmp0_ = NULL;
	GCancellable* _tmp1_ = NULL;
	_tmp0_ = data;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, g_cancellable_get_type (), GCancellable));
	c = _tmp1_;
	g_cancellable_cancel (c);
	g_object_unref ((GObject*) c);
	_g_object_unref0 (c);
}


static void ___lambda8__gdestroy_notify (void* data) {
	__lambda8_ (data);
}


static void _seahorse_gkr_dialog_update_wait_cursor_gtk_widget_realize (GtkWidget* _sender, gpointer self) {
	seahorse_gkr_dialog_update_wait_cursor (_sender);
}


GCancellable* seahorse_gkr_dialog_begin_request (GtkWidget* dialog) {
	GCancellable* result = NULL;
	GtkWidget* _tmp0_ = NULL;
	GCancellable* cancellable = NULL;
	GCancellable* _tmp1_ = NULL;
	GtkWidget* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GObject* _tmp4_ = NULL;
	GtkWidget* _tmp5_ = NULL;
	gboolean _tmp6_ = FALSE;
	GtkWidget* _tmp9_ = NULL;
	g_return_val_if_fail (dialog != NULL, NULL);
	_tmp0_ = dialog;
	seahorse_gkr_dialog_complete_request (_tmp0_, TRUE);
	_tmp1_ = g_cancellable_new ();
	cancellable = _tmp1_;
	_tmp2_ = dialog;
	_tmp3_ = cancellable;
	_tmp4_ = g_object_ref ((GObject*) _tmp3_);
	g_object_set_data_full ((GObject*) _tmp2_, "gkr-request", _tmp4_, ___lambda8__gdestroy_notify);
	_tmp5_ = dialog;
	_tmp6_ = gtk_widget_get_realized (_tmp5_);
	if (_tmp6_) {
		GtkWidget* _tmp7_ = NULL;
		_tmp7_ = dialog;
		seahorse_gkr_dialog_update_wait_cursor (_tmp7_);
	} else {
		GtkWidget* _tmp8_ = NULL;
		_tmp8_ = dialog;
		g_signal_connect (_tmp8_, "realize", (GCallback) _seahorse_gkr_dialog_update_wait_cursor_gtk_widget_realize, NULL);
	}
	_tmp9_ = dialog;
	gtk_widget_set_sensitive (_tmp9_, FALSE);
	result = cancellable;
	return result;
}


void seahorse_gkr_dialog_complete_request (GtkWidget* dialog, gboolean cancel) {
	GCancellable* cancellable = NULL;
	GtkWidget* _tmp0_ = NULL;
	gpointer _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	GCancellable* _tmp3_ = NULL;
	GtkWidget* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	GtkWidget* _tmp9_ = NULL;
	g_return_if_fail (dialog != NULL);
	_tmp0_ = dialog;
	_tmp1_ = g_object_steal_data ((GObject*) _tmp0_, "gkr-request");
	cancellable = (GCancellable*) _tmp1_;
	_tmp3_ = cancellable;
	if (_tmp3_ != NULL) {
		gboolean _tmp4_ = FALSE;
		_tmp4_ = cancel;
		_tmp2_ = _tmp4_;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		GCancellable* _tmp5_ = NULL;
		_tmp5_ = cancellable;
		g_cancellable_cancel (_tmp5_);
	}
	_tmp6_ = dialog;
	_tmp7_ = gtk_widget_get_realized (_tmp6_);
	if (_tmp7_) {
		GtkWidget* _tmp8_ = NULL;
		_tmp8_ = dialog;
		seahorse_gkr_dialog_update_wait_cursor (_tmp8_);
	}
	_tmp9_ = dialog;
	gtk_widget_set_sensitive (_tmp9_, TRUE);
	_g_object_unref0 (cancellable);
}


SeahorseGkrDialog* seahorse_gkr_dialog_construct (GType object_type) {
	SeahorseGkrDialog* self = NULL;
	self = (SeahorseGkrDialog*) g_type_create_instance (object_type);
	return self;
}


SeahorseGkrDialog* seahorse_gkr_dialog_new (void) {
	return seahorse_gkr_dialog_construct (SEAHORSE_GKR_TYPE_DIALOG);
}


static void seahorse_gkr_value_dialog_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void seahorse_gkr_value_dialog_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		seahorse_gkr_dialog_unref (value->data[0].v_pointer);
	}
}


static void seahorse_gkr_value_dialog_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = seahorse_gkr_dialog_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer seahorse_gkr_value_dialog_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* seahorse_gkr_value_dialog_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		SeahorseGkrDialog* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = seahorse_gkr_dialog_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* seahorse_gkr_value_dialog_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	SeahorseGkrDialog** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = seahorse_gkr_dialog_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* seahorse_gkr_param_spec_dialog (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	SeahorseGkrParamSpecDialog* spec;
	g_return_val_if_fail (g_type_is_a (object_type, SEAHORSE_GKR_TYPE_DIALOG), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer seahorse_gkr_value_get_dialog (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_GKR_TYPE_DIALOG), NULL);
	return value->data[0].v_pointer;
}


void seahorse_gkr_value_set_dialog (GValue* value, gpointer v_object) {
	SeahorseGkrDialog* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_GKR_TYPE_DIALOG));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SEAHORSE_GKR_TYPE_DIALOG));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		seahorse_gkr_dialog_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		seahorse_gkr_dialog_unref (old);
	}
}


void seahorse_gkr_value_take_dialog (GValue* value, gpointer v_object) {
	SeahorseGkrDialog* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_GKR_TYPE_DIALOG));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SEAHORSE_GKR_TYPE_DIALOG));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		seahorse_gkr_dialog_unref (old);
	}
}


static void seahorse_gkr_dialog_class_init (SeahorseGkrDialogClass * klass) {
	seahorse_gkr_dialog_parent_class = g_type_class_peek_parent (klass);
	((SeahorseGkrDialogClass *) klass)->finalize = seahorse_gkr_dialog_finalize;
}


static void seahorse_gkr_dialog_instance_init (SeahorseGkrDialog * self) {
	self->ref_count = 1;
}


static void seahorse_gkr_dialog_finalize (SeahorseGkrDialog* obj) {
	SeahorseGkrDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_GKR_TYPE_DIALOG, SeahorseGkrDialog);
	g_signal_handlers_destroy (self);
}


GType seahorse_gkr_dialog_get_type (void) {
	static volatile gsize seahorse_gkr_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_gkr_dialog_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { seahorse_gkr_value_dialog_init, seahorse_gkr_value_dialog_free_value, seahorse_gkr_value_dialog_copy_value, seahorse_gkr_value_dialog_peek_pointer, "p", seahorse_gkr_value_dialog_collect_value, "p", seahorse_gkr_value_dialog_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (SeahorseGkrDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seahorse_gkr_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeahorseGkrDialog), 0, (GInstanceInitFunc) seahorse_gkr_dialog_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType seahorse_gkr_dialog_type_id;
		seahorse_gkr_dialog_type_id = g_type_register_fundamental (g_type_fundamental_next (), "SeahorseGkrDialog", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&seahorse_gkr_dialog_type_id__volatile, seahorse_gkr_dialog_type_id);
	}
	return seahorse_gkr_dialog_type_id__volatile;
}


gpointer seahorse_gkr_dialog_ref (gpointer instance) {
	SeahorseGkrDialog* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void seahorse_gkr_dialog_unref (gpointer instance) {
	SeahorseGkrDialog* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		SEAHORSE_GKR_DIALOG_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


