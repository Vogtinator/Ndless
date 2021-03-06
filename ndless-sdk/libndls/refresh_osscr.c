/****************************************************************************
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is Ndless code.
 *
 * The Initial Developer of the Original Code is Levak.
 * Portions created by the Initial Developer are Copyright (C) 2012
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s): Olivier Armand <olivier.calc@gmail.com>
 ****************************************************************************/

#include <os.h>

void refresh_osscr(void) {
	/* Only forcing the doc browser refresh produces a glitch, maybe because we are still in the doc browser screen */
	refresh_homescr();
	refresh_docbrowser(0x1B5A);
}
