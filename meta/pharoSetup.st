"Update Pharo"
"Utilities updateFromServer.
"!
"Update Gofer"
[ Gofer gofer load ]
        on: Error
        do: [ :err | err retry ].
Gofer gofer recompile.
!
"Refactoring"
Gofer new
        squeaksource: 'rb';
        package: 'AST-Core';
        package: 'Refactoring-Core';
        package: 'Refactoring-Spelling';
        load.
!
"OmniBrowser"
Gofer new
        renggli: 'omnibrowser';
        package: 'OmniBrowser';
        package: 'OB-Standard';
        package: 'OB-Morphic';
        package: 'OB-Shout';
        package: 'OB-Refactory';
        package: 'OB-Regex';
        package: 'OB-SUnitIntegration';
        load.
!
"Tools"
Gofer new
        renggli: 'unsorted';
        package: 'Shout';
        package: 'RoelTyper';
        package: 'ECompletion';
        package: 'ECompletionOmniBrowser';
        load.
!
"OSProcess for Auto Exporting"
Gofer new
        squeaksource: 'OSProcess';
        package: 'OSProcess';
        package: 'Tests-OSProcess';
        load.
!
"Pinocchio"
Gofer new
        squeaksource: 'p';
        package: 'Pinocchio';
        package: 'PEG';
        package: 'Phexample';
	    load
!
"Select Tools"
SystemBrowser default: OBSystemBrowserAdaptor.
!
"Cleanup Environment"
UIThemeStandardSqueak beCurrent.
World submorphs do: [ :each |
        (each isKindOf: SketchMorph)
                ifTrue: [ each delete ] ].
!
"Set decent Preferences"
Preferences enable: #scrollBarsNarrow.
Preferences enable: #menuColorFromWorld.
Preferences enable: #roundedWindowCorners.
Preferences enable: #colorWhenPrittyPrinting.
Preferences disable: #gradientMenu.
Preferences disable: #gradientButtonLook.
Preferences disable: #gradientScrollbarLook.
Preferences disable: #scrollBarsWithoutMenuButton.
Preferences enable: #useNewDiffToolsForMC.
Preferences disable: #duplicateAllControlAndAltKeys.
Preferences disable: #fadedBackgroundWindows.
Preferences disable: #windowAnimation.
Preferences disable: #noWindowAnimationForClosing.
