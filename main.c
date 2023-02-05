#include "common.h"
#include "chunk.h"
#include "chunk.c"
#include "debug.h"
#include "debug.c"

int main(int argc, const char* argv[]){
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  disassembleChunk(&chunk, "test check");
  freeChunk(&chunk);
  return 0;
}
