/* seahorse-gkr.h generated by valac 0.25.4, the Vala compiler, do not modify */


#ifndef __GKR_SEAHORSE_GKR_H__
#define __GKR_SEAHORSE_GKR_H__

#include <glib.h>
#include <glib-object.h>
#include <gcr/gcr-base.h>
#include "seahorse-common.h"
#include <libsecret/secret.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define SEAHORSE_GKR_TYPE_BACKEND (seahorse_gkr_backend_get_type ())
#define SEAHORSE_GKR_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_BACKEND, SeahorseGkrBackend))
#define SEAHORSE_GKR_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_BACKEND, SeahorseGkrBackendClass))
#define SEAHORSE_GKR_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_BACKEND))
#define SEAHORSE_GKR_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_BACKEND))
#define SEAHORSE_GKR_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_BACKEND, SeahorseGkrBackendClass))

typedef struct _SeahorseGkrBackend SeahorseGkrBackend;
typedef struct _SeahorseGkrBackendClass SeahorseGkrBackendClass;
typedef struct _SeahorseGkrBackendPrivate SeahorseGkrBackendPrivate;

#define SEAHORSE_GKR_TYPE_KEYRING (seahorse_gkr_keyring_get_type ())
#define SEAHORSE_GKR_KEYRING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_KEYRING, SeahorseGkrKeyring))
#define SEAHORSE_GKR_KEYRING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_KEYRING, SeahorseGkrKeyringClass))
#define SEAHORSE_GKR_IS_KEYRING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_KEYRING))
#define SEAHORSE_GKR_IS_KEYRING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_KEYRING))
#define SEAHORSE_GKR_KEYRING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_KEYRING, SeahorseGkrKeyringClass))

typedef struct _SeahorseGkrKeyring SeahorseGkrKeyring;
typedef struct _SeahorseGkrKeyringClass SeahorseGkrKeyringClass;

#define SEAHORSE_GKR_TYPE_BACKEND_ACTIONS (seahorse_gkr_backend_actions_get_type ())
#define SEAHORSE_GKR_BACKEND_ACTIONS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_BACKEND_ACTIONS, SeahorseGkrBackendActions))
#define SEAHORSE_GKR_BACKEND_ACTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_BACKEND_ACTIONS, SeahorseGkrBackendActionsClass))
#define SEAHORSE_GKR_IS_BACKEND_ACTIONS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_BACKEND_ACTIONS))
#define SEAHORSE_GKR_IS_BACKEND_ACTIONS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_BACKEND_ACTIONS))
#define SEAHORSE_GKR_BACKEND_ACTIONS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_BACKEND_ACTIONS, SeahorseGkrBackendActionsClass))

typedef struct _SeahorseGkrBackendActions SeahorseGkrBackendActions;
typedef struct _SeahorseGkrBackendActionsClass SeahorseGkrBackendActionsClass;
typedef struct _SeahorseGkrBackendActionsPrivate SeahorseGkrBackendActionsPrivate;

#define SEAHORSE_GKR_TYPE_DIALOG (seahorse_gkr_dialog_get_type ())
#define SEAHORSE_GKR_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_DIALOG, SeahorseGkrDialog))
#define SEAHORSE_GKR_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_DIALOG, SeahorseGkrDialogClass))
#define SEAHORSE_GKR_IS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_DIALOG))
#define SEAHORSE_GKR_IS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_DIALOG))
#define SEAHORSE_GKR_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_DIALOG, SeahorseGkrDialogClass))

typedef struct _SeahorseGkrDialog SeahorseGkrDialog;
typedef struct _SeahorseGkrDialogClass SeahorseGkrDialogClass;
typedef struct _SeahorseGkrDialogPrivate SeahorseGkrDialogPrivate;

#define SEAHORSE_GKR_TYPE_USE (seahorse_gkr_use_get_type ())

#define SEAHORSE_GKR_TYPE_ITEM (seahorse_gkr_item_get_type ())
#define SEAHORSE_GKR_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_ITEM, SeahorseGkrItem))
#define SEAHORSE_GKR_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_ITEM, SeahorseGkrItemClass))
#define SEAHORSE_GKR_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_ITEM))
#define SEAHORSE_GKR_IS_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_ITEM))
#define SEAHORSE_GKR_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_ITEM, SeahorseGkrItemClass))

typedef struct _SeahorseGkrItem SeahorseGkrItem;
typedef struct _SeahorseGkrItemClass SeahorseGkrItemClass;
typedef struct _SeahorseGkrItemPrivate SeahorseGkrItemPrivate;

#define SEAHORSE_GKR_TYPE_ITEM_ADD (seahorse_gkr_item_add_get_type ())
#define SEAHORSE_GKR_ITEM_ADD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_ITEM_ADD, SeahorseGkrItemAdd))
#define SEAHORSE_GKR_ITEM_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_ITEM_ADD, SeahorseGkrItemAddClass))
#define SEAHORSE_GKR_IS_ITEM_ADD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_ITEM_ADD))
#define SEAHORSE_GKR_IS_ITEM_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_ITEM_ADD))
#define SEAHORSE_GKR_ITEM_ADD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_ITEM_ADD, SeahorseGkrItemAddClass))

typedef struct _SeahorseGkrItemAdd SeahorseGkrItemAdd;
typedef struct _SeahorseGkrItemAddClass SeahorseGkrItemAddClass;
typedef struct _SeahorseGkrItemAddPrivate SeahorseGkrItemAddPrivate;

#define SEAHORSE_GKR_TYPE_ITEM_PROPERTIES (seahorse_gkr_item_properties_get_type ())
#define SEAHORSE_GKR_ITEM_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_ITEM_PROPERTIES, SeahorseGkrItemProperties))
#define SEAHORSE_GKR_ITEM_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_ITEM_PROPERTIES, SeahorseGkrItemPropertiesClass))
#define SEAHORSE_GKR_IS_ITEM_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_ITEM_PROPERTIES))
#define SEAHORSE_GKR_IS_ITEM_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_ITEM_PROPERTIES))
#define SEAHORSE_GKR_ITEM_PROPERTIES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_ITEM_PROPERTIES, SeahorseGkrItemPropertiesClass))

typedef struct _SeahorseGkrItemProperties SeahorseGkrItemProperties;
typedef struct _SeahorseGkrItemPropertiesClass SeahorseGkrItemPropertiesClass;
typedef struct _SeahorseGkrItemPropertiesPrivate SeahorseGkrItemPropertiesPrivate;
typedef struct _SeahorseGkrKeyringPrivate SeahorseGkrKeyringPrivate;

#define SEAHORSE_GKR_TYPE_KEYRING_ADD (seahorse_gkr_keyring_add_get_type ())
#define SEAHORSE_GKR_KEYRING_ADD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_KEYRING_ADD, SeahorseGkrKeyringAdd))
#define SEAHORSE_GKR_KEYRING_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_KEYRING_ADD, SeahorseGkrKeyringAddClass))
#define SEAHORSE_GKR_IS_KEYRING_ADD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_KEYRING_ADD))
#define SEAHORSE_GKR_IS_KEYRING_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_KEYRING_ADD))
#define SEAHORSE_GKR_KEYRING_ADD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_KEYRING_ADD, SeahorseGkrKeyringAddClass))

typedef struct _SeahorseGkrKeyringAdd SeahorseGkrKeyringAdd;
typedef struct _SeahorseGkrKeyringAddClass SeahorseGkrKeyringAddClass;
typedef struct _SeahorseGkrKeyringAddPrivate SeahorseGkrKeyringAddPrivate;

#define SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES (seahorse_gkr_keyring_properties_get_type ())
#define SEAHORSE_GKR_KEYRING_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES, SeahorseGkrKeyringProperties))
#define SEAHORSE_GKR_KEYRING_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES, SeahorseGkrKeyringPropertiesClass))
#define SEAHORSE_GKR_IS_KEYRING_PROPERTIES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES))
#define SEAHORSE_GKR_IS_KEYRING_PROPERTIES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES))
#define SEAHORSE_GKR_KEYRING_PROPERTIES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SEAHORSE_GKR_TYPE_KEYRING_PROPERTIES, SeahorseGkrKeyringPropertiesClass))

typedef struct _SeahorseGkrKeyringProperties SeahorseGkrKeyringProperties;
typedef struct _SeahorseGkrKeyringPropertiesClass SeahorseGkrKeyringPropertiesClass;
typedef struct _SeahorseGkrKeyringPropertiesPrivate SeahorseGkrKeyringPropertiesPrivate;

struct _SeahorseGkrBackend {
	GObject parent_instance;
	SeahorseGkrBackendPrivate * priv;
};

struct _SeahorseGkrBackendClass {
	GObjectClass parent_class;
};

struct _SeahorseGkrBackendActions {
	SeahorseActions parent_instance;
	SeahorseGkrBackendActionsPrivate * priv;
};

struct _SeahorseGkrBackendActionsClass {
	SeahorseActionsClass parent_class;
};

struct _SeahorseGkrDialog {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SeahorseGkrDialogPrivate * priv;
};

struct _SeahorseGkrDialogClass {
	GTypeClass parent_class;
	void (*finalize) (SeahorseGkrDialog *self);
};

typedef enum  {
	SEAHORSE_GKR_USE_OTHER,
	SEAHORSE_GKR_USE_NETWORK,
	SEAHORSE_GKR_USE_WEB,
	SEAHORSE_GKR_USE_PGP,
	SEAHORSE_GKR_USE_SSH
} SeahorseGkrUse;

struct _SeahorseGkrItem {
	SecretItem parent_instance;
	SeahorseGkrItemPrivate * priv;
};

struct _SeahorseGkrItemClass {
	SecretItemClass parent_class;
};

struct _SeahorseGkrItemAdd {
	GtkDialog parent_instance;
	SeahorseGkrItemAddPrivate * priv;
};

struct _SeahorseGkrItemAddClass {
	GtkDialogClass parent_class;
};

struct _SeahorseGkrItemProperties {
	GtkDialog parent_instance;
	SeahorseGkrItemPropertiesPrivate * priv;
};

struct _SeahorseGkrItemPropertiesClass {
	GtkDialogClass parent_class;
};

struct _SeahorseGkrKeyring {
	SecretCollection parent_instance;
	SeahorseGkrKeyringPrivate * priv;
};

struct _SeahorseGkrKeyringClass {
	SecretCollectionClass parent_class;
};

struct _SeahorseGkrKeyringAdd {
	GtkDialog parent_instance;
	SeahorseGkrKeyringAddPrivate * priv;
};

struct _SeahorseGkrKeyringAddClass {
	GtkDialogClass parent_class;
};

struct _SeahorseGkrKeyringProperties {
	GtkDialog parent_instance;
	SeahorseGkrKeyringPropertiesPrivate * priv;
};

struct _SeahorseGkrKeyringPropertiesClass {
	GtkDialogClass parent_class;
};


GType seahorse_gkr_backend_get_type (void) G_GNUC_CONST;
void seahorse_gkr_backend_refresh_collections (SeahorseGkrBackend* self);
void seahorse_gkr_backend_initialize (void);
SeahorseGkrBackend* seahorse_gkr_backend_instance (void);
GType seahorse_gkr_keyring_get_type (void) G_GNUC_CONST;
GList* seahorse_gkr_backend_get_keyrings (SeahorseGkrBackend* self);
void seahorse_gkr_backend_refresh (SeahorseGkrBackend* self);
gboolean seahorse_gkr_backend_has_alias (SeahorseGkrBackend* self, const gchar* alias, SeahorseGkrKeyring* keyring);
SeahorseGkrBackend* seahorse_gkr_backend_new (void);
SeahorseGkrBackend* seahorse_gkr_backend_construct (GType object_type);
GHashTable* seahorse_gkr_backend_get_aliases (SeahorseGkrBackend* self);
SecretService* seahorse_gkr_backend_get_service (SeahorseGkrBackend* self);
GType seahorse_gkr_backend_actions_get_type (void) G_GNUC_CONST;
GtkActionGroup* seahorse_gkr_backend_actions_instance (SeahorseGkrBackend* backend);
SeahorseGkrBackend* seahorse_gkr_backend_actions_get_backend (SeahorseGkrBackendActions* self);
gpointer seahorse_gkr_dialog_ref (gpointer instance);
void seahorse_gkr_dialog_unref (gpointer instance);
GParamSpec* seahorse_gkr_param_spec_dialog (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void seahorse_gkr_value_set_dialog (GValue* value, gpointer v_object);
void seahorse_gkr_value_take_dialog (GValue* value, gpointer v_object);
gpointer seahorse_gkr_value_get_dialog (const GValue* value);
GType seahorse_gkr_dialog_get_type (void) G_GNUC_CONST;
GCancellable* seahorse_gkr_dialog_begin_request (GtkWidget* dialog);
void seahorse_gkr_dialog_complete_request (GtkWidget* dialog, gboolean cancel);
SeahorseGkrDialog* seahorse_gkr_dialog_new (void);
SeahorseGkrDialog* seahorse_gkr_dialog_construct (GType object_type);
#define SEAHORSE_GKR_NAME "gkr"
GType seahorse_gkr_use_get_type (void) G_GNUC_CONST;
GType seahorse_gkr_item_get_type (void) G_GNUC_CONST;
void seahorse_gkr_item_refresh (SeahorseGkrItem* self);
SecretValue* seahorse_gkr_item_get_secret (SeahorseGkrItem* self);
gchar* seahorse_gkr_item_get_attribute (SeahorseGkrItem* self, const gchar* name);
void seahorse_gkr_item_set_secret (SeahorseGkrItem* self, SecretValue* value, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
gboolean seahorse_gkr_item_set_secret_finish (SeahorseGkrItem* self, GAsyncResult* _res_, GError** error);
SeahorseGkrItem* seahorse_gkr_item_new (void);
SeahorseGkrItem* seahorse_gkr_item_construct (GType object_type);
gchar* seahorse_gkr_item_get_description (SeahorseGkrItem* self);
SeahorseGkrUse seahorse_gkr_item_get_use (SeahorseGkrItem* self);
gboolean seahorse_gkr_item_get_has_secret (SeahorseGkrItem* self);
SeahorseGkrKeyring* seahorse_gkr_item_get_place (SeahorseGkrItem* self);
void seahorse_gkr_item_set_place (SeahorseGkrItem* self, SeahorseGkrKeyring* value);
SeahorseFlags seahorse_gkr_item_get_object_flags (SeahorseGkrItem* self);
GIcon* seahorse_gkr_item_get_icon (SeahorseGkrItem* self);
gchar* seahorse_gkr_item_get_label (SeahorseGkrItem* self);
gchar* seahorse_gkr_item_get_markup (SeahorseGkrItem* self);
SeahorseUsage seahorse_gkr_item_get_usage (SeahorseGkrItem* self);
GtkActionGroup* seahorse_gkr_item_get_actions (SeahorseGkrItem* self);
GType seahorse_gkr_item_add_get_type (void) G_GNUC_CONST;
SeahorseGkrItemAdd* seahorse_gkr_item_add_new (GtkWindow* parent);
SeahorseGkrItemAdd* seahorse_gkr_item_add_construct (GType object_type, GtkWindow* parent);
GType seahorse_gkr_item_properties_get_type (void) G_GNUC_CONST;
SeahorseGkrItemProperties* seahorse_gkr_item_properties_new (SeahorseGkrItem* item, GtkWindow* parent);
SeahorseGkrItemProperties* seahorse_gkr_item_properties_construct (GType object_type, SeahorseGkrItem* item, GtkWindow* parent);
SeahorseGkrItem* seahorse_gkr_item_properties_get_item (SeahorseGkrItemProperties* self);
SeahorseGkrKeyring* seahorse_gkr_keyring_new (void);
SeahorseGkrKeyring* seahorse_gkr_keyring_construct (GType object_type);
gboolean seahorse_gkr_keyring_get_is_default (SeahorseGkrKeyring* self);
GType seahorse_gkr_keyring_add_get_type (void) G_GNUC_CONST;
SeahorseGkrKeyringAdd* seahorse_gkr_keyring_add_new (GtkWindow* parent);
SeahorseGkrKeyringAdd* seahorse_gkr_keyring_add_construct (GType object_type, GtkWindow* parent);
GType seahorse_gkr_keyring_properties_get_type (void) G_GNUC_CONST;
SeahorseGkrKeyringProperties* seahorse_gkr_keyring_properties_new (SeahorseGkrKeyring* keyring, GtkWindow* parent);
SeahorseGkrKeyringProperties* seahorse_gkr_keyring_properties_construct (GType object_type, SeahorseGkrKeyring* keyring, GtkWindow* parent);
SeahorseGkrKeyring* seahorse_gkr_keyring_properties_get_keyring (SeahorseGkrKeyringProperties* self);


G_END_DECLS

#endif
