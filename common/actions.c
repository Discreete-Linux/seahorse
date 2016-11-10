/* actions.c generated by valac 0.25.4, the Vala compiler
 * generated from actions.vala, do not modify */

/*
 * Seahorse
 *
 * Copyright (C) 2008 Stefan Walter
 * Copyright (C) 2011 Collabora Ltd.
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
#include "seahorse-common.h"
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _SeahorseParamSpecAction SeahorseParamSpecAction;

struct _SeahorseParamSpecAction {
	GParamSpec parent_instance;
};

struct _SeahorseActionsPrivate {
	const gchar* _definition;
	GWeakRef _catalog;
};


static gpointer seahorse_action_parent_class = NULL;
static gpointer seahorse_actions_parent_class = NULL;

enum  {
	SEAHORSE_ACTION_DUMMY_PROPERTY
};
static void seahorse_action_finalize (SeahorseAction* obj);
#define SEAHORSE_ACTIONS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SEAHORSE_TYPE_ACTIONS, SeahorseActionsPrivate))
enum  {
	SEAHORSE_ACTIONS_DUMMY_PROPERTY,
	SEAHORSE_ACTIONS_CATALOG,
	SEAHORSE_ACTIONS_DEFINITION
};
static SeahorseActions* seahorse_actions_new (const gchar* name);
static SeahorseActions* seahorse_actions_construct (GType object_type, const gchar* name);
static void seahorse_actions_finalize (GObject* obj);
static void _vala_seahorse_actions_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_seahorse_actions_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void seahorse_action_pre_activate (GtkAction* action, SeahorseCatalog* catalog, GtkWindow* window) {
	GtkAction* _tmp0_ = NULL;
	GtkWindow* _tmp1_ = NULL;
	GtkWindow* _tmp2_ = NULL;
	GtkAction* _tmp3_ = NULL;
	SeahorseCatalog* _tmp4_ = NULL;
	SeahorseCatalog* _tmp5_ = NULL;
	g_return_if_fail (action != NULL);
	_tmp0_ = action;
	_tmp1_ = window;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	g_object_set_data_full ((GObject*) _tmp0_, "seahorse-action-window", _tmp2_, g_object_unref);
	_tmp3_ = action;
	_tmp4_ = catalog;
	_tmp5_ = _g_object_ref0 (_tmp4_);
	g_object_set_data_full ((GObject*) _tmp3_, "seahorse-action-catalog", _tmp5_, g_object_unref);
}


void seahorse_action_activate_with_window (GtkAction* action, SeahorseCatalog* catalog, GtkWindow* window) {
	GtkAction* _tmp0_ = NULL;
	SeahorseCatalog* _tmp1_ = NULL;
	GtkWindow* _tmp2_ = NULL;
	GtkAction* _tmp3_ = NULL;
	GtkAction* _tmp4_ = NULL;
	g_return_if_fail (action != NULL);
	_tmp0_ = action;
	_tmp1_ = catalog;
	_tmp2_ = window;
	seahorse_action_pre_activate (_tmp0_, _tmp1_, _tmp2_);
	_tmp3_ = action;
	gtk_action_activate (_tmp3_);
	_tmp4_ = action;
	seahorse_action_post_activate (_tmp4_);
}


void seahorse_action_post_activate (GtkAction* action) {
	GtkAction* _tmp0_ = NULL;
	GtkAction* _tmp1_ = NULL;
	g_return_if_fail (action != NULL);
	_tmp0_ = action;
	g_object_set_data_full ((GObject*) _tmp0_, "seahorse-action-window", NULL, NULL);
	_tmp1_ = action;
	g_object_set_data_full ((GObject*) _tmp1_, "seahorse-action-catalog", NULL, NULL);
}


GtkWindow* seahorse_action_get_window (GtkAction* action) {
	GtkWindow* result = NULL;
	GtkWindow* window = NULL;
	GtkAction* _tmp0_ = NULL;
	gconstpointer _tmp1_ = NULL;
	GtkWindow* _tmp2_ = NULL;
	g_return_val_if_fail (action != NULL, NULL);
	_tmp0_ = action;
	_tmp1_ = g_object_get_data ((GObject*) _tmp0_, "seahorse-action-window");
	_tmp2_ = _g_object_ref0 ((GtkWindow*) _tmp1_);
	window = _tmp2_;
	result = window;
	return result;
}


SeahorseCatalog* seahorse_action_get_catalog (GtkAction* action) {
	SeahorseCatalog* result = NULL;
	SeahorseCatalog* catalog = NULL;
	GtkAction* _tmp0_ = NULL;
	gconstpointer _tmp1_ = NULL;
	SeahorseCatalog* _tmp2_ = NULL;
	g_return_val_if_fail (action != NULL, NULL);
	_tmp0_ = action;
	_tmp1_ = g_object_get_data ((GObject*) _tmp0_, "seahorse-action-catalog");
	_tmp2_ = _g_object_ref0 ((SeahorseCatalog*) _tmp1_);
	catalog = _tmp2_;
	result = catalog;
	return result;
}


SeahorseAction* seahorse_action_construct (GType object_type) {
	SeahorseAction* self = NULL;
	self = (SeahorseAction*) g_type_create_instance (object_type);
	return self;
}


SeahorseAction* seahorse_action_new (void) {
	return seahorse_action_construct (SEAHORSE_TYPE_ACTION);
}


static void seahorse_value_action_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void seahorse_value_action_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		seahorse_action_unref (value->data[0].v_pointer);
	}
}


static void seahorse_value_action_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = seahorse_action_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer seahorse_value_action_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* seahorse_value_action_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		SeahorseAction* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = seahorse_action_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* seahorse_value_action_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	SeahorseAction** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = seahorse_action_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* seahorse_param_spec_action (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	SeahorseParamSpecAction* spec;
	g_return_val_if_fail (g_type_is_a (object_type, SEAHORSE_TYPE_ACTION), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer seahorse_value_get_action (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_TYPE_ACTION), NULL);
	return value->data[0].v_pointer;
}


void seahorse_value_set_action (GValue* value, gpointer v_object) {
	SeahorseAction* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_TYPE_ACTION));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SEAHORSE_TYPE_ACTION));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		seahorse_action_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		seahorse_action_unref (old);
	}
}


void seahorse_value_take_action (GValue* value, gpointer v_object) {
	SeahorseAction* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, SEAHORSE_TYPE_ACTION));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, SEAHORSE_TYPE_ACTION));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		seahorse_action_unref (old);
	}
}


static void seahorse_action_class_init (SeahorseActionClass * klass) {
	seahorse_action_parent_class = g_type_class_peek_parent (klass);
	((SeahorseActionClass *) klass)->finalize = seahorse_action_finalize;
}


static void seahorse_action_instance_init (SeahorseAction * self) {
	self->ref_count = 1;
}


static void seahorse_action_finalize (SeahorseAction* obj) {
	SeahorseAction * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_TYPE_ACTION, SeahorseAction);
	g_signal_handlers_destroy (self);
}


GType seahorse_action_get_type (void) {
	static volatile gsize seahorse_action_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_action_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { seahorse_value_action_init, seahorse_value_action_free_value, seahorse_value_action_copy_value, seahorse_value_action_peek_pointer, "p", seahorse_value_action_collect_value, "p", seahorse_value_action_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (SeahorseActionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seahorse_action_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeahorseAction), 0, (GInstanceInitFunc) seahorse_action_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType seahorse_action_type_id;
		seahorse_action_type_id = g_type_register_fundamental (g_type_fundamental_next (), "SeahorseAction", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&seahorse_action_type_id__volatile, seahorse_action_type_id);
	}
	return seahorse_action_type_id__volatile;
}


gpointer seahorse_action_ref (gpointer instance) {
	SeahorseAction* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void seahorse_action_unref (gpointer instance) {
	SeahorseAction* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		SEAHORSE_ACTION_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static SeahorseActions* seahorse_actions_construct (GType object_type, const gchar* name) {
	SeahorseActions * self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = name;
	self = (SeahorseActions*) g_object_new (object_type, "name", _tmp0_, NULL);
	return self;
}


static SeahorseActions* seahorse_actions_new (const gchar* name) {
	return seahorse_actions_construct (SEAHORSE_TYPE_ACTIONS, name);
}


void seahorse_actions_register_definition (SeahorseActions* self, const gchar* definition) {
	const gchar* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (definition != NULL);
	_tmp0_ = definition;
	self->priv->_definition = _tmp0_;
}


SeahorseCatalog* seahorse_actions_get_catalog (SeahorseActions* self) {
	SeahorseCatalog* result;
	GObject* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_weak_ref_get (&self->priv->_catalog);
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, SEAHORSE_TYPE_CATALOG, SeahorseCatalog);
	return result;
}


void seahorse_actions_set_catalog (SeahorseActions* self, SeahorseCatalog* value) {
	SeahorseCatalog* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	g_weak_ref_set (&self->priv->_catalog, (GObject*) _tmp0_);
	g_object_notify ((GObject *) self, "catalog");
}


const gchar* seahorse_actions_get_definition (SeahorseActions* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_definition;
	result = _tmp0_;
	return result;
}


static void seahorse_actions_class_init (SeahorseActionsClass * klass) {
	seahorse_actions_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SeahorseActionsPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_seahorse_actions_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_seahorse_actions_set_property;
	G_OBJECT_CLASS (klass)->finalize = seahorse_actions_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAHORSE_ACTIONS_CATALOG, g_param_spec_object ("catalog", "catalog", "catalog", SEAHORSE_TYPE_CATALOG, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SEAHORSE_ACTIONS_DEFINITION, g_param_spec_string ("definition", "definition", "definition", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void seahorse_actions_instance_init (SeahorseActions * self) {
	self->priv = SEAHORSE_ACTIONS_GET_PRIVATE (self);
}


static void seahorse_actions_finalize (GObject* obj) {
	SeahorseActions * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SEAHORSE_TYPE_ACTIONS, SeahorseActions);
	g_weak_ref_clear (&self->priv->_catalog);
	G_OBJECT_CLASS (seahorse_actions_parent_class)->finalize (obj);
}


GType seahorse_actions_get_type (void) {
	static volatile gsize seahorse_actions_type_id__volatile = 0;
	if (g_once_init_enter (&seahorse_actions_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SeahorseActionsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) seahorse_actions_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SeahorseActions), 0, (GInstanceInitFunc) seahorse_actions_instance_init, NULL };
		GType seahorse_actions_type_id;
		seahorse_actions_type_id = g_type_register_static (gtk_action_group_get_type (), "SeahorseActions", &g_define_type_info, 0);
		g_once_init_leave (&seahorse_actions_type_id__volatile, seahorse_actions_type_id);
	}
	return seahorse_actions_type_id__volatile;
}


static void _vala_seahorse_actions_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SeahorseActions * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SEAHORSE_TYPE_ACTIONS, SeahorseActions);
	switch (property_id) {
		case SEAHORSE_ACTIONS_CATALOG:
		g_value_take_object (value, seahorse_actions_get_catalog (self));
		break;
		case SEAHORSE_ACTIONS_DEFINITION:
		g_value_set_string (value, seahorse_actions_get_definition (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_seahorse_actions_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SeahorseActions * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SEAHORSE_TYPE_ACTIONS, SeahorseActions);
	switch (property_id) {
		case SEAHORSE_ACTIONS_CATALOG:
		seahorse_actions_set_catalog (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



