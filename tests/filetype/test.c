#include <assert.h>

#include "seatest.h"

#include "../../src/filetype.h"

void filetype_tests(void);

static void
setup(void)
{
}

static void
teardown(void)
{
	reset_filetypes();
	reset_fileviewers();
}

static void
all_tests(void)
{
	filetype_tests();
}

int
main(int argc, char **argv)
{
	suite_setup(setup);
	suite_teardown(teardown);

	return run_tests(all_tests) == 0;
}

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab : */
