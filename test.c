
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

#include <salloc.h>

/**
 * Some arbitrary data structure both programs have
 * matching compile-time defs for.
 */
typedef struct List {
  void* data;
  struct List* next;
} List;

int list_len(List* list) {
  if (list->next == NULL) {
    return 0;
  }
  return 1 + list_len(list->next);
}

int main(int argc, char** argv) {

  // All processes must agree on a file which is used to share memory.
  char* shared_memory_file_path = "/tmp/some_memory.bin";
  if (argc > 1) {
    shared_memory_file_path = argv[1];
  }

  // Start allocator
  SallocCtx* ctx = malloc(sizeof(SallocCtx));
  salloc_init(ctx, shared_memory_file_path);

  // Print updates every quarter second
  pid_t our_pid = getpid();
  while (1) {
    usleep(250000);
    
    // More TODO
    printf("[ %d ] says len() = %d\n", );
    //printf("[ %d ] says len() = %d\n", );
    printf("======================\n", );

  }

  return 0;
}
