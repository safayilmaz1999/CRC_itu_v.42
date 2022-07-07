//#include "common.h"
#include "stdio.h"
#include "crc.h"
#include "string.h"
//#include "util.h"
// test that static version matches context version
void main()
{
	uint32_t crc;
crc = crc32( crc, "The quick brown fox jumps over the lazy dog", strlen("The quick brown fox jumps over the lazy dog"));
printf("%x", crc);
}
