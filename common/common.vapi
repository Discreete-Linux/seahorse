/* common.vapi generated by valac 0.25.4, do not modify. */

namespace Seahorse {
	namespace Util {
		[CCode (cheader_filename = "seahorse-common.h")]
		public static string get_display_date_string (long time);
		[CCode (cheader_filename = "seahorse-common.h")]
		public static Gtk.Builder load_built_contents (Gtk.Container? frame, string name);
		[CCode (cheader_filename = "seahorse-common.h")]
		public static void show_error (Gtk.Widget? parent, string? heading, string? message);
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public class Action {
		public Action ();
		public static void activate_with_window (Gtk.Action action, Seahorse.Catalog? catalog, Gtk.Window? window);
		public static Seahorse.Catalog? get_catalog (Gtk.Action action);
		public static Gtk.Window? get_window (Gtk.Action action);
		public static void post_activate (Gtk.Action action);
		public static void pre_activate (Gtk.Action action, Seahorse.Catalog? catalog, Gtk.Window? window);
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public class Actions : Gtk.ActionGroup {
		public void register_definition (string definition);
		public Seahorse.Catalog? catalog { owned get; set; }
		public string? definition { get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public abstract class Catalog : Gtk.Window {
		public const string MENU_OBJECT;
		public Catalog ();
		public override void dispose ();
		public void ensure_updated ();
		public abstract GLib.List<weak Seahorse.Backend> get_backends ();
		public unowned Gtk.Builder get_builder ();
		public abstract Seahorse.Place? get_focused_place ();
		public abstract GLib.List<weak GLib.Object> get_selected_objects ();
		public unowned T get_widget<T> (string name);
		public void include_actions (Gtk.ActionGroup group);
		public void show_context_menu (string name, uint button, uint time);
		public void show_properties (GLib.Object obj);
		public string ui_name { get; construct; }
		public Gtk.Window window { get; }
		public virtual signal void selection_changed ();
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public class DeleteDialog : Gtk.MessageDialog {
		[CCode (type = "GtkDialog*")]
		public DeleteDialog (Gtk.Window? parent, string format, ...);
		public static bool prompt (Gtk.Window? parent, string text);
		[Notify]
		public string? check_label { get; set; }
		[Notify]
		public bool check_require { get; set; }
		[Notify]
		public bool check_value { get; set; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public abstract class Deleter : GLib.Object {
		public Deleter ();
		public abstract bool add_object (GLib.Object obj);
		public abstract Gtk.Dialog create_confirm (Gtk.Window? parent);
		public abstract async bool @delete (GLib.Cancellable? cancellable) throws GLib.Error;
		public abstract unowned GLib.List<weak GLib.Object> get_objects ();
		public bool prompt (Gtk.Window? parent);
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public class Registry : GLib.Object {
		public Registry ();
		public static void cleanup ();
		public static GLib.Object? object_instance (string category);
		public static GLib.List<GLib.Object> object_instances (string category);
		public static void register_object (GLib.Object object, string category);
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Backend : Gcr.Collection {
		public static GLib.List<Seahorse.Backend> get_registered ();
		public abstract Seahorse.Place lookup_place (string uri);
		public void register ();
		public abstract Gtk.ActionGroup actions { owned get; }
		public abstract string description { get; }
		public abstract string label { get; }
		public abstract string name { get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Deletable : GLib.Object {
		public static bool can_delete (GLib.Object obj);
		public abstract Seahorse.Deleter create_deleter ();
		public static int delete_with_prompt_wait (GLib.List<GLib.Object> objects, Gtk.Window? parent) throws GLib.Error;
		public abstract bool deletable { get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Exportable : GLib.Object {
		public static bool can_export (GLib.Object object);
		public abstract GLib.List<Seahorse.Exporter> create_exporters (Seahorse.ExporterType type);
		public static int export_to_directory_wait (GLib.List<GLib.Object> objects, string directory) throws GLib.Error;
		public static int export_to_prompt_wait (GLib.List<GLib.Object> objects, Gtk.Window? parent) throws GLib.Error;
		public static uint export_to_text_wait (GLib.List<GLib.Object> objects, [CCode (array_length_type = "size_t")] out uint8[] output) throws GLib.Error;
		public static bool prompt (GLib.List<Seahorse.Exporter> exporters, Gtk.Window? parent, ref string? directory, out GLib.File chosen_file, out Seahorse.Exporter chosen_exporter);
		public abstract bool exportable { get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Exporter : GLib.Object {
		public abstract bool add_object (GLib.Object obj);
		[CCode (array_length_type = "size_t")]
		public abstract async uint8[] export (GLib.Cancellable? cancellable) throws GLib.Error;
		public async bool export_to_file (GLib.File file, bool overwrite, GLib.Cancellable? cancellable) throws GLib.Error;
		public abstract unowned GLib.List<weak GLib.Object> get_objects ();
		public abstract string content_type { get; }
		public abstract Gtk.FileFilter file_filter { owned get; }
		public abstract string filename { owned get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Lockable : GLib.Object {
		public static bool can_lock (GLib.Object object);
		public static bool can_unlock (GLib.Object object);
		public abstract async bool @lock (GLib.TlsInteraction? interaction, GLib.Cancellable? cancellable) throws GLib.Error;
		public abstract async bool unlock (GLib.TlsInteraction? interaction, GLib.Cancellable? cancellable) throws GLib.Error;
		public abstract bool lockable { get; }
		public abstract bool unlockable { get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Place : Gcr.Collection {
		public abstract async bool load (GLib.Cancellable? cancellable) throws GLib.Error;
		public abstract Gtk.ActionGroup? actions { owned get; }
		public abstract string description { owned get; }
		public abstract GLib.Icon icon { owned get; }
		public abstract string label { owned get; }
		public abstract string uri { owned get; }
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public interface Viewable : GLib.Object {
		public static bool can_view (GLib.Object object);
		public abstract Gtk.Window? create_viewer (Gtk.Window? parent);
		public static bool view (GLib.Object object, Gtk.Window? parent);
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public enum ExporterType {
		ANY,
		TEXTUAL
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	[Flags]
	public enum Flags {
		[CCode (cname = "SEAHORSE_FLAG_NONE")]
		NONE,
		[CCode (cname = "SEAHORSE_FLAG_IS_VALID")]
		IS_VALID,
		[CCode (cname = "SEAHORSE_FLAG_CAN_ENCRYPT")]
		CAN_ENCRYPT,
		[CCode (cname = "SEAHORSE_FLAG_CAN_SIGN")]
		CAN_SIGN,
		[CCode (cname = "SEAHORSE_FLAG_CAN_CERTIFY")]
		CAN_CERTIFY,
		[CCode (cname = "SEAHORSE_FLAG_CAN_AUTHENTICATE")]
		CAN_AUTHENTICATE,
		[CCode (cname = "SEAHORSE_FLAG_EXPIRED")]
		EXPIRED,
		[CCode (cname = "SEAHORSE_FLAG_REVOKED")]
		REVOKED,
		[CCode (cname = "SEAHORSE_FLAG_DISABLED")]
		DISABLED,
		[CCode (cname = "SEAHORSE_FLAG_TRUSTED")]
		TRUSTED,
		[CCode (cname = "SEAHORSE_FLAG_PERSONAL")]
		PERSONAL,
		[CCode (cname = "SEAHORSE_FLAG_EXPORTABLE")]
		EXPORTABLE,
		[CCode (cname = "SEAHORSE_FLAG_DELETABLE")]
		DELETABLE
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public enum Usage {
		NONE,
		SYMMETRIC_KEY,
		PUBLIC_KEY,
		PRIVATE_KEY,
		CREDENTIALS,
		IDENTITY,
		OTHER
	}
	[CCode (cheader_filename = "seahorse-common.h")]
	public static bool _icons_inited;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string BAD_FILENAME_CHARS;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_FOLDER;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_KEY;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_KEY_SSH;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_PASSWORD;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_PERSON;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_SECRET;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_SIGN;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_SIGN_BAD;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_SIGN_OK;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_SIGN_UNKNOWN;
	[CCode (cheader_filename = "seahorse-common.h")]
	public const string ICON_WEBBROWSER;
	[CCode (cheader_filename = "seahorse-common.h")]
	public static void icons_init ();
}
