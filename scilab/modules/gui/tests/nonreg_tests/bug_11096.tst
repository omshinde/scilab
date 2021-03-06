// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2012 - DIGITEO - Vincent COUVERT
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- Non-regression test for bug 11096 -->
// <-- TEST WITH GRAPHIC -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/11096
//
// <-- Short Description -->
// Issue when using units other than default points for uicontrols.

f = figure();
h = uicontrol(f, "style", "pushbutton", "units", "normalized");
h.position = [.5 .5 .5 .5];

assert_checkequal(h.position, [.5 .5 .5 .5]);