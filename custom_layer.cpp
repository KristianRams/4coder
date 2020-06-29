/*
@Author: Kristian Ramsamoj 
My simple default key mappings in 4coder
4coder_default_bidings.cpp - Supplies the default bindings used for default 4coder behavior.
*/

// TOP

#if !defined(FCODER_DEFAULT_BINDINGS_CPP)
#define FCODER_DEFAULT_BINDINGS_CPP

#include "4coder_default_include.cpp"

#if !defined(META_PASS)
#include "generated/managed_id_metadata.cpp"
#endif

void
custom_layer_init(Application_Links *app){
    Thread_Context *tctx = get_thread_context(app);
    
    default_framework_init(app);
    
    set_all_default_hooks(app);
    mapping_init(tctx, &framework_mapping);
    setup_default_mapping(&framework_mapping, mapid_global, mapid_file, mapid_code);
    
    // *****************************************************************************
    //                           My custom bindings 
    // *****************************************************************************
    MappingScope();
    SelectMapping(&framework_mapping);
    
    SelectMap(mapid_global);
    Bind(seek_end_of_line,       KeyCode_E, KeyCode_Control);
    Bind(seek_beginning_of_line, KeyCode_A, KeyCode_Control);
    Bind(delete_range,           KeyCode_W, KeyCode_Control);
    Bind(delete_line,            KeyCode_D, KeyCode_Control);
    Bind(toggle_fullscreen,      KeyCode_F12);
    Bind(change_active_panel_backwards,  KeyCode_Period, KeyCode_Control);
    Bind(exit_4coder,            KeyCode_P, KeyCode_Shift, KeyCode_Alt);
    Bind(open_panel_vsplit,      KeyCode_J, KeyCode_Control);
    Bind(close_panel,            KeyCode_K, KeyCode_Control);
    Bind(move_up,                KeyCode_Up, KeyCode_Alt);
    Bind(move_down,              KeyCode_Down, KeyCode_Alt);
    Bind(page_up,                KeyCode_U,    KeyCode_Alt); 
    Bind(page_down,              KeyCode_I,    KeyCode_Alt); 
    
    
    
    // *****************************************************************************
    //                           End custom bindings 
    // *****************************************************************************
    
    // #if OS_MAC
    //     setup_mac_mapping(&framework_mapping, mapid_global, mapid_file, mapid_code);
    // #else
    //     setup_default_mapping(&framework_mapping, mapid_global, mapid_file, mapid_code);
    // #endif
}

#endif //FCODER_DEFAULT_BINDINGS

// BOTTOM

