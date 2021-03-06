var allDescriptors=[{"name":"audits",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "audits",
            "title": "Audits",
            "order": 6,
            "className": "WebInspector.AuditsPanel"
        }
    ],
    "scripts": [ "AuditsPanel.js" ]
}
,{"name":"console",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "console",
            "title": "Console",
            "order": 20,
            "className": "WebInspector.ConsolePanel"
        },
        {
            "type": "drawer-view",
            "name": "console",
            "title": "Console",
            "order": "0",
            "className": "WebInspector.ConsolePanel.WrapperView"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.ConsoleModel"],
            "className": "WebInspector.ConsolePanel.ConsoleRevealer"
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "console.show",
            "className": "WebInspector.ConsoleView.ShowConsoleActionDelegate",
            "bindings": [
                {
                    "shortcut": "Ctrl+`"
                }
            ]
        },
        {
            "type": "ui-setting",
            "section": "Console",
            "title": "Log XMLHttpRequests",
            "settingName": "monitoringXHREnabled",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Console",
            "title": "Preserve log upon navigation",
            "settingName": "preserveConsoleLog",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Console",
            "title": "Show timestamps",
            "settingName": "consoleTimestampsEnabled",
            "settingType": "checkbox"
        }
    ],
    "scripts": [ "ConsolePanel.js" ]
}
,{"name":"devices",
    "extensions": [
        {
            "type": "drawer-view",
            "name": "devices",
            "title": "Devices",
            "order": "12",
            "experiment": "devicesPanel",
            "className": "WebInspector.DevicesView"
        }
    ],
    "scripts": [ "DevicesView.js" ]
}
,{"name":"elements",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "elements",
            "title": "Elements",
            "order": 0,
            "className": "WebInspector.ElementsPanel"
        },
        {
            "type": "@WebInspector.ContextMenu.Provider",
            "contextTypes": ["WebInspector.RemoteObject", "WebInspector.DOMNode"],
            "className": "WebInspector.ElementsPanel.ContextMenuProvider"
        },
        {
            "type": "drawer-view",
            "name": "emulation",
            "title": "Emulation",
            "order": "10",
            "className": "WebInspector.OverridesView"
        },
        {
            "type": "drawer-view",
            "name": "rendering",
            "title": "Rendering",
            "order": "11",
            "className": "WebInspector.RenderingOptionsView"
        },
        {
            "type": "@WebInspector.Renderer",
            "contextTypes": ["WebInspector.DOMNode"],
            "className": "WebInspector.ElementsTreeOutline.Renderer"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.DOMNode"],
            "className": "WebInspector.ElementsPanel.DOMNodeRevealer"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.RemoteObject"],
            "className": "WebInspector.ElementsPanel.NodeRemoteObjectRevealer"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.OverridesSupport"],
            "className": "WebInspector.OverridesView.Revealer"
        },
        {
            "type": "ui-setting",
            "section": "Elements",
            "title": "Color format",
            "settingName": "colorFormat",
            "settingType": "select",
            "options": [
                [ "As authored", "original" ],
                [ "HEX: #DAC0DE", "hex", true ],
                [ "RGB: rgb(128, 255, 255)", "rgb", true ],
                [ "HSL: hsl(300, 80%, 90%)", "hsl", true ]
            ]
        },
        {
            "type": "ui-setting",
            "section": "Elements",
            "title": "Show user agent styles",
            "settingName": "showUserAgentStyles",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Elements",
            "title": "Show user agent shadow DOM",
            "settingName": "showUAShadowDOM",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Elements",
            "title": "Word wrap",
            "settingName": "domWordWrap",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Elements",
            "title": "Show rulers",
            "settingName": "showMetricsRulers",
            "settingType": "checkbox"
        }
    ],
    "scripts": [ "ElementsPanel.js" ]
}
,{"name":"extensions",
    "extensions": [
        {
            "type": "@WebInspector.ExtensionServerAPI",
            "className": "WebInspector.ExtensionServer"
        }
    ],
    "dependencies": [ "sources" ],
    "scripts": [ "ExtensionServer.js" ]
}
,{"name":"layers",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "layers",
            "title": "Layers",
            "order": 7,
            "className": "WebInspector.LayersPanel"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.DeferredLayerTree"],
            "className": "WebInspector.LayersPanel.LayerTreeRevealer"
        }
    ],
    "dependencies": [ "timeline" ],
    "scripts": [ "LayersPanel.js" ]
}
,{"name":"main",
    "extensions": [
        {
            "type": "@WebInspector.ContextMenu.Provider",
            "contextTypes": ["WebInspector.UISourceCode", "WebInspector.Resource", "WebInspector.NetworkRequest", "Node"],
            "className": "WebInspector.HandlerRegistry.ContextMenuProvider"
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.reload",
            "className": "WebInspector.Main.ReloadActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "F5 Ctrl+R"
                },
                {
                    "platform": "mac",
                    "shortcut": "Meta+R"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.hard-reload",
            "className": "WebInspector.Main.HardReloadActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "Shift+F5 Ctrl+F5 Ctrl+Shift+F5 Shift+Ctrl+R"
                },
                {
                    "platform": "mac",
                    "shortcut": "Shift+Meta+R"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.toggle-drawer",
            "className": "WebInspector.InspectorView.DrawerToggleActionDelegate",
            "bindings": [
                {
                    "shortcut": "Esc"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.debug-reload",
            "className": "WebInspector.Main.DebugReloadActionDelegate",
            "bindings": [
                {
                    "shortcut": "Alt+R"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.toggle-element-search",
            "className": "WebInspector.InspectElementModeController.ToggleSearchActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "Ctrl+Shift+C"
                },
                {
                    "platform": "mac",
                    "shortcut": "Meta+Shift+C"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.zoom-in",
            "className": "WebInspector.Main.ZoomInActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "Ctrl+Plus Ctrl+Shift+Plus Ctrl+NumpadPlus Ctrl+Shift+NumpadPlus"
                },
                {
                    "platform": "mac",
                    "shortcut": "Meta+Plus Meta+Shift+Plus Meta+NumpadPlus Meta+Shift+NumpadPlus"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.zoom-out",
            "className": "WebInspector.Main.ZoomOutActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "Ctrl+Minus Ctrl+Shift+Minus Ctrl+NumpadMinus Ctrl+Shift+NumpadMinus"
                },
                {
                    "platform": "mac",
                    "shortcut": "Meta+Minus Meta+Shift+Minus Meta+NumpadMinus Meta+Shift+NumpadMinus"
                }
            ]
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "main.zoom-reset",
            "className": "WebInspector.Main.ZoomResetActionDelegate",
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "Ctrl+0 Ctrl+Numpad0"
                },
                {
                    "platform": "mac",
                    "shortcut": "Meta+0 Meta+Numpad0"
                }
            ]
        },
        {
            "type": "@WebInspector.StatusBarButton.Provider",
            "className": "WebInspector.InspectElementModeController.ToggleButtonProvider",
            "location": "toolbar-left",
            "order": 0,
            "actionId": "main.toggle-element-search"
        },
        {
            "type": "@WebInspector.StatusBarButton.Provider",
            "className": "WebInspector.App.EmulationButtonProvider",
            "order": 1,
            "location": "toolbar-left"
        },
        {
            "type": "@WebInspector.StatusBarButton.Provider",
            "className": "WebInspector.DockController.ButtonProvider",
            "order": 1,
            "location": "toolbar-right"
        },
        {
            "type": "@WebInspector.StatusBarButton.Provider",
            "className": "WebInspector.ScreencastApp.StatusBarButtonProvider",
            "order": 2,
            "location": "toolbar-right"
        },
        {
            "type": "ui-setting",
            "title": "Disable cache (while DevTools is open)",
            "settingName": "cacheDisabled",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Appearance",
            "title": "Split panels vertically when docked to right",
            "settingName": "splitVerticallyWhenDockedToRight",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Appearance",
            "settingType": "custom",
            "className": "WebInspector.Main.ShortcutPanelSwitchSettingDelegate"
        },
        {
            "type": "ui-setting",
            "section": "Extensions",
            "settingType": "custom",
            "className": "WebInspector.HandlerRegistry.OpenAnchorLocationSettingDelegate"
        }
    ]
}
,{"name":"network",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "network",
            "title": "Network",
            "order": 1,
            "className": "WebInspector.NetworkPanel"
        },
        {
            "type": "@WebInspector.ContextMenu.Provider",
            "contextTypes": ["WebInspector.NetworkRequest", "WebInspector.Resource", "WebInspector.UISourceCode"],
            "className": "WebInspector.NetworkPanel.ContextMenuProvider"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.NetworkRequest"],
            "className": "WebInspector.NetworkPanel.RequestRevealer"
        }
    ],
    "dependencies": [ "source_frame" ],
    "scripts": [ "NetworkPanel.js" ]
}
,{"name":"profiler",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "profiles",
            "title": "Profiles",
            "order": 4,
            "className": "WebInspector.ProfilesPanel"
        },
        {
            "type": "@WebInspector.ContextMenu.Provider",
            "contextTypes": ["WebInspector.RemoteObject"],
            "className": "WebInspector.ProfilesPanel.ContextMenuProvider"
        },
        {
            "type": "ui-setting",
            "section": "Profiler",
            "title": "Show advanced heap snapshot properties",
            "settingName": "showAdvancedHeapSnapshotProperties",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Profiler",
            "title": "High resolution CPU profiling",
            "settingName": "highResolutionCpuProfiling",
            "settingType": "checkbox"
        }
    ],
    "scripts": [ "ProfilesPanel.js" ]
}
,{"name":"resources",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "resources",
            "title": "Resources",
            "order": 5,
            "className": "WebInspector.ResourcesPanel"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.Resource"],
            "className": "WebInspector.ResourcesPanel.ResourceRevealer"
        }
    ],
    "dependencies": [ "source_frame" ],
    "scripts": [ "ResourcesPanel.js" ]
}
,{"name":"search",
    "extensions": [
         {
             "type": "drawer-view",
             "name": "search",
             "title": "Search",
             "order": "1",
             "className": "WebInspector.AdvancedSearchView"
         },
         {
             "type": "@WebInspector.ActionDelegate",
             "actionId": "search.toggle",
             "className": "WebInspector.AdvancedSearchView.ToggleDrawerViewActionDelegate",
             "bindings": [
                 {
                     "platform": "mac",
                     "shortcut": "Meta+Alt+F"
                 },
                 {
                     "platform": "windows,linux",
                     "shortcut": "Ctrl+Shift+F"
                 }
             ]
         }
    ],
    "scripts": [ "AdvancedSearchView.js" ]
}
,{"name":"settings",
    "extensions": [
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "settings.show",
            "className": "WebInspector.SettingsController.SettingsScreenActionDelegate",
            "bindings": [
                {
                    "shortcut": "F1 Shift+?"
                }
            ]
        },
        {
            "type": "@WebInspector.StatusBarButton.Provider",
            "actionId": "settings.show",
            "location": "toolbar-right",
            "title": "Settings",
            "order": 0,
            "elementClass": "settings-status-bar-item"
        }
    ],
    "scripts": [ "SettingsScreen.js" ]
}
,{"name":"source_frame",
    "extensions": [
        {
            "type": "@WebInspector.InplaceEditor",
            "className": "WebInspector.CodeMirrorUtils"
        },
        {
            "type": "@WebInspector.TokenizerFactory",
            "className": "WebInspector.CodeMirrorUtils.TokenizerFactory"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Default indentation",
            "settingName": "textEditorIndent",
            "settingType": "select",
            "options": [
                ["2 spaces", "  "],
                ["4 spaces", "    "],
                ["8 spaces", "        "],
                ["Tab character", "\t"]
            ]
        }
    ],
    "scripts": [ "SourceFrame.js" ]
}
,{"name":"sources",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "sources",
            "title": "Sources",
            "order": 2,
            "className": "WebInspector.SourcesPanel"
        },
        {
            "type": "@WebInspector.ContextMenu.Provider",
            "contextTypes": ["WebInspector.UISourceCode", "WebInspector.RemoteObject"],
            "className": "WebInspector.SourcesPanel.ContextMenuProvider"
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "debugger.toggle-pause",
            "className": "WebInspector.SourcesPanel.TogglePauseActionDelegate",
            "contextTypes": ["WebInspector.SourcesPanel", "WebInspector.ShortcutRegistry.ForwardedShortcut"],
            "bindings": [
                {
                    "platform": "windows,linux",
                    "shortcut": "F8 Ctrl+\\"
                },
                {
                    "platform": "mac",
                    "shortcut": "F8 Meta+\\"
                }
            ]
        },
        {
            "type": "@WebInspector.SearchScope",
            "className": "WebInspector.SourcesSearchScope"
        },
        {
            "type": "@WebInspector.DrawerEditor",
            "className": "WebInspector.SourcesPanel.DrawerEditor"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.UILocation"],
            "className": "WebInspector.SourcesPanel.UILocationRevealer"
        },
        {
            "type": "@WebInspector.Revealer",
            "contextTypes": ["WebInspector.UISourceCode"],
            "className": "WebInspector.SourcesPanel.UISourceCodeRevealer"
        },
        {
            "type": "@WebInspector.SourcesView.EditorAction",
            "className": "WebInspector.InplaceFormatterEditorAction"
        },
        {
            "type": "@WebInspector.SourcesView.EditorAction",
            "className": "WebInspector.ScriptFormatterEditorAction"
        },
        {
            "type": "navigator-view",
            "name": "sources",
            "title": "Sources",
            "order": 1,
            "className": "WebInspector.SourcesNavigatorView"
        },
        {
            "type": "navigator-view",
            "name": "contentScripts",
            "title": "Content scripts",
            "order": 2,
            "className": "WebInspector.ContentScriptsNavigatorView"
        },
        {
            "type": "navigator-view",
            "name": "snippets",
            "title": "Snippets",
            "order": 3,
            "className": "WebInspector.SnippetsNavigatorView"
        },
        {
            "type": "@WebInspector.ActionDelegate",
            "actionId": "sources.go-to-source",
            "className": "WebInspector.SourcesPanel.ShowGoToSourceDialogActionDelegate",
            "bindings": [
                {
                    "platform": "mac",
                    "shortcut": "Meta+O Meta+P"
                },
                {
                    "platform": "windows,linux",
                    "shortcut": "Ctrl+O Ctrl+P"
                }
            ]
        },
        {
            "type": "ui-setting",
            "settingName": "javaScriptDisabled",
            "settingType": "custom",
            "className": "WebInspector.SourcesPanel.DisableJavaScriptSettingDelegate"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Search in content scripts",
            "settingName": "searchInContentScripts",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Enable JavaScript source maps",
            "settingName": "jsSourceMapsEnabled",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Detect indentation",
            "settingName": "textEditorAutoDetectIndent",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Autocompletion",
            "settingName": "textEditorAutocompletion",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Bracket matching",
            "settingName": "textEditorBracketMatching",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Show whitespace characters",
            "settingName": "showWhitespacesInEditor",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "title": "Enable CSS source maps",
            "settingName": "cssSourceMapsEnabled",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "title": "Auto-reload generated CSS",
            "parentSettingName": "cssSourceMapsEnabled",
            "settingName": "cssReloadEnabled",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "section": "Sources",
            "experiment": "frameworksDebuggingSupport",
            "title": "Skip stepping through sources with particular names",
            "settingName": "skipStackFramesSwitch",
            "settingType": "checkbox"
        },
        {
            "type": "ui-setting",
            "experiment": "frameworksDebuggingSupport",
            "parentSettingName": "skipStackFramesSwitch",
            "settingType": "custom",
            "className": "WebInspector.SourcesPanel.SkipStackFramePatternSettingDelegate"
        }
    ],
    "dependencies": [ "source_frame" ],
    "scripts": [ "SourcesPanel.js" ]
}
,{"name":"timeline",
    "extensions": [
        {
            "type": "@WebInspector.Panel",
            "name": "timeline",
            "title": "Timeline",
            "order": 3,
            "className": "WebInspector.TimelinePanel"
        }
    ],
    "scripts": [ "TimelinePanel.js" ]
}
];