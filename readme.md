
# salloc

salloc is a library which uses linux shared memory APIs to map
the same memory into two different processes. Traditionally this requires
processes to share a common parent. Salloc makes it possible for anonymous
processes to share memory so long as they agree on the same filesystem path
to back the allocator with.

# Future

Eventually this will stop being a research project and we can throw in whatever
APIs microsoft has for shared memory, then make the library fully cross-platform.


