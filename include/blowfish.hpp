#include <inttypes.h>
#include <stddef.h>

class Blowfish
{
private:
    uint32_t pArray[18];
    uint32_t sbox[4][256];

    uint32_t F(uint32_t leftHalf);

public:
    Blowfish(const char *key, size_t keyLength);
    uint64_t EncryptBlock(uint64_t block);
    uint64_t DecryptBlock(uint64_t block);
};
