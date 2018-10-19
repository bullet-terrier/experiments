# This attempts to build prints.c into an executable.
# the included DEBUG_MAIN.h file only defines a symbol
# which when added to prints.c triggers the preprocessor
# to build a main loop - which it wouldn't have otherwise.
# the -Wp option is passing a comma separated list to the preprocessor.
# the -v option is trying to make this verbose.
# need to refresh myself on the mechanism for a position independent executable -pie/-PIE?
# -shared option trips it to generate a shared library.
gcc prints.c -v -Wp,DEBUG_MAIN.h -o prints -shared
