
#include <salloc.h>

void salloc_init(SallocCtx* ctx, char* path_to_shmem) {
    int protection = PROT_READ | PROT_WRITE;
    int visibility = MAP_SHARED | MAP_ANONYMOUS;

    ctx->path_to_shmem = path_to_shmem;
    //ctx->shmem_fd = open(ctx.path_to_shmem, O_RDONLY);

    // TODO panic on file i/o errors

}

size_t salloc_size(SallocCtx* ctx) {
  return 0;
}
size_t salloc_used(SallocCtx* ctx) {
  return 0;
}


