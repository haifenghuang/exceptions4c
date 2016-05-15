
# include "testing.h"


/**
 * Uncaught exception
 *
 * This test throws an exception; there is no `catch` block to handle it.
 *
 */
TEST_CASE{

    TEST_EXPECTING(RuntimeException);

    e4c_context_begin(E4C_FALSE);

    E4C_THROW(RuntimeException, "Nobody will catch me.");

    e4c_context_end();
}
