#include <stdio.h>

#include <locale.h>
#include <libintl.h>

#define _(string) gettext(string)

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");
	bindtextdomain(GETTEXT_PACKAGE, LOCALEDIR);
	textdomain(GETTEXT_PACKAGE);
	printf(_("Hello, CMake.\n"));
	return 0;
}
