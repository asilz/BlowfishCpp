#include <assert.h>
#include <blowfish.hpp>

int main(void)
{
    Blowfish fish = Blowfish("\x37\xD0\x6B\xB5\x16\xCB\x75\x46", 8);
    fish = Blowfish("\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF", 8);
    uint64_t block = fish.EncryptBlock(0xFFFFFFFFFFFFFFFF);
    assert(fish.DecryptBlock(block) == 0xFFFFFFFFFFFFFFFF);
    assert(block == 0x51866FD5B85ECB8A);

    return 0;
}