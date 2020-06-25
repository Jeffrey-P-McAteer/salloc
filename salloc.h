
#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>

typedef struct SallocCtx {
  char* path_to_shmem;
  int shmem_fd;
  
} SallocCtx;

void salloc_init(SallocCtx* ctx, char* path_to_shmem);

// Returns the total size of the shared memory file.
size_t salloc_size(SallocCtx* ctx);

// How many bytes of salloc_size() are actually allocated
size_t salloc_used(SallocCtx* ctx);

void* salloc(SallocCtx* ctx, size_t num_bytes);
