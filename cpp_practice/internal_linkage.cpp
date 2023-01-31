// intenally linked variables can be used within a single file but not visible in other files
#include <iostream>

using namespace std;

static int g_x; // non-constant globals have external linkage by default, but can be given internal linkage via the static keyword
const int g_y { 1 }; // const globals have internal linkage by default
constexpr int g_z { 2 }; // constexpr globals have internal linkage by default

// This function is declared as static, and can now be used only within this file
// Attempts to access it from another file via a function forward declaration will fail
/*
static int add(int x, int y)
{
    return x + y;
}
*/

/*

static int g_x;          // defines non-initialized internal global variable (zero initialized by default)
static int g_x{ 1 };     // defines initialized internal global variable

const int g_y { 2 };     // defines initialized internal global const variable
constexpr int g_y { 3 }; // defines initialized internal global constexpr variable
// Internal function definitions:


static int foo() {};     // defines internal function

*/

int main() {
    return 0;
}