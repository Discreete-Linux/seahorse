/*
 * Generated by gdbus-codegen 2.41.5. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __SEAHORSE_SHELL_SEARCH_PROVIDER_GENERATED_H__
#define __SEAHORSE_SHELL_SEARCH_PROVIDER_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Shell.SearchProvider2 */

#define SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2 (seahorse_shell_search_provider2_get_type ())
#define SEAHORSE_SHELL_SEARCH_PROVIDER2(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2, SeahorseShellSearchProvider2))
#define SEAHORSE_IS_SHELL_SEARCH_PROVIDER2(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2))
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2, SeahorseShellSearchProvider2Iface))

struct _SeahorseShellSearchProvider2;
typedef struct _SeahorseShellSearchProvider2 SeahorseShellSearchProvider2;
typedef struct _SeahorseShellSearchProvider2Iface SeahorseShellSearchProvider2Iface;

struct _SeahorseShellSearchProvider2Iface
{
  GTypeInterface parent_iface;

  gboolean (*handle_activate_result) (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_identifier,
    const gchar *const *arg_terms,
    guint arg_timestamp);

  gboolean (*handle_get_initial_result_set) (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_terms);

  gboolean (*handle_get_result_metas) (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_identifiers);

  gboolean (*handle_get_subsearch_result_set) (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_previous_results,
    const gchar *const *arg_terms);

  gboolean (*handle_launch_search) (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *arg_terms,
    guint arg_timestamp);

};

GType seahorse_shell_search_provider2_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *seahorse_shell_search_provider2_interface_info (void);
guint seahorse_shell_search_provider2_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void seahorse_shell_search_provider2_complete_get_initial_result_set (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *results);

void seahorse_shell_search_provider2_complete_get_subsearch_result_set (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *results);

void seahorse_shell_search_provider2_complete_get_result_metas (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation,
    GVariant *metas);

void seahorse_shell_search_provider2_complete_activate_result (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation);

void seahorse_shell_search_provider2_complete_launch_search (
    SeahorseShellSearchProvider2 *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void seahorse_shell_search_provider2_call_get_initial_result_set (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_terms,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean seahorse_shell_search_provider2_call_get_initial_result_set_finish (
    SeahorseShellSearchProvider2 *proxy,
    gchar ***out_results,
    GAsyncResult *res,
    GError **error);

gboolean seahorse_shell_search_provider2_call_get_initial_result_set_sync (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_terms,
    gchar ***out_results,
    GCancellable *cancellable,
    GError **error);

void seahorse_shell_search_provider2_call_get_subsearch_result_set (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_previous_results,
    const gchar *const *arg_terms,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean seahorse_shell_search_provider2_call_get_subsearch_result_set_finish (
    SeahorseShellSearchProvider2 *proxy,
    gchar ***out_results,
    GAsyncResult *res,
    GError **error);

gboolean seahorse_shell_search_provider2_call_get_subsearch_result_set_sync (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_previous_results,
    const gchar *const *arg_terms,
    gchar ***out_results,
    GCancellable *cancellable,
    GError **error);

void seahorse_shell_search_provider2_call_get_result_metas (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_identifiers,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean seahorse_shell_search_provider2_call_get_result_metas_finish (
    SeahorseShellSearchProvider2 *proxy,
    GVariant **out_metas,
    GAsyncResult *res,
    GError **error);

gboolean seahorse_shell_search_provider2_call_get_result_metas_sync (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_identifiers,
    GVariant **out_metas,
    GCancellable *cancellable,
    GError **error);

void seahorse_shell_search_provider2_call_activate_result (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *arg_identifier,
    const gchar *const *arg_terms,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean seahorse_shell_search_provider2_call_activate_result_finish (
    SeahorseShellSearchProvider2 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean seahorse_shell_search_provider2_call_activate_result_sync (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *arg_identifier,
    const gchar *const *arg_terms,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);

void seahorse_shell_search_provider2_call_launch_search (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_terms,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean seahorse_shell_search_provider2_call_launch_search_finish (
    SeahorseShellSearchProvider2 *proxy,
    GAsyncResult *res,
    GError **error);

gboolean seahorse_shell_search_provider2_call_launch_search_sync (
    SeahorseShellSearchProvider2 *proxy,
    const gchar *const *arg_terms,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY (seahorse_shell_search_provider2_proxy_get_type ())
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY, SeahorseShellSearchProvider2Proxy))
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY, SeahorseShellSearchProvider2ProxyClass))
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY, SeahorseShellSearchProvider2ProxyClass))
#define SEAHORSE_IS_SHELL_SEARCH_PROVIDER2_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY))
#define SEAHORSE_IS_SHELL_SEARCH_PROVIDER2_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_PROXY))

typedef struct _SeahorseShellSearchProvider2Proxy SeahorseShellSearchProvider2Proxy;
typedef struct _SeahorseShellSearchProvider2ProxyClass SeahorseShellSearchProvider2ProxyClass;
typedef struct _SeahorseShellSearchProvider2ProxyPrivate SeahorseShellSearchProvider2ProxyPrivate;

struct _SeahorseShellSearchProvider2Proxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  SeahorseShellSearchProvider2ProxyPrivate *priv;
};

struct _SeahorseShellSearchProvider2ProxyClass
{
  GDBusProxyClass parent_class;
};

GType seahorse_shell_search_provider2_proxy_get_type (void) G_GNUC_CONST;

void seahorse_shell_search_provider2_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
SeahorseShellSearchProvider2 *seahorse_shell_search_provider2_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
SeahorseShellSearchProvider2 *seahorse_shell_search_provider2_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void seahorse_shell_search_provider2_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
SeahorseShellSearchProvider2 *seahorse_shell_search_provider2_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
SeahorseShellSearchProvider2 *seahorse_shell_search_provider2_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON (seahorse_shell_search_provider2_skeleton_get_type ())
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON, SeahorseShellSearchProvider2Skeleton))
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON, SeahorseShellSearchProvider2SkeletonClass))
#define SEAHORSE_SHELL_SEARCH_PROVIDER2_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON, SeahorseShellSearchProvider2SkeletonClass))
#define SEAHORSE_IS_SHELL_SEARCH_PROVIDER2_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON))
#define SEAHORSE_IS_SHELL_SEARCH_PROVIDER2_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), SEAHORSE_TYPE_SHELL_SEARCH_PROVIDER2_SKELETON))

typedef struct _SeahorseShellSearchProvider2Skeleton SeahorseShellSearchProvider2Skeleton;
typedef struct _SeahorseShellSearchProvider2SkeletonClass SeahorseShellSearchProvider2SkeletonClass;
typedef struct _SeahorseShellSearchProvider2SkeletonPrivate SeahorseShellSearchProvider2SkeletonPrivate;

struct _SeahorseShellSearchProvider2Skeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  SeahorseShellSearchProvider2SkeletonPrivate *priv;
};

struct _SeahorseShellSearchProvider2SkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType seahorse_shell_search_provider2_skeleton_get_type (void) G_GNUC_CONST;

SeahorseShellSearchProvider2 *seahorse_shell_search_provider2_skeleton_new (void);


G_END_DECLS

#endif /* __SEAHORSE_SHELL_SEARCH_PROVIDER_GENERATED_H__ */