#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#include "nna_hw.h"
#include "nna_interface.h"
#include "nna_config.h"

#include "ion_alloc.h"

static void* gp_vaddr;
static void* gp_paddr;
void myProgram() {
	printf("Lets goooo!");
	sunxi_ion_alloc_open();
	sunxi_ion_alloc_palloc(0x80000,&gp_vaddr,&gp_paddr);
	
	printf((uint32_t*)gp_vaddr);
	
	// uint32_t data[1] = {5}
	// sunxi_ion_loadin((uint32_t*)data, sizeof(data), (uint32_t)(gp_paddr)+buf1_offset);

	
	// printf(*((int*)0x8000));
}

int main(int argc, char **argv) {

  // Set clock to 400Mhz (DDR2 memory speed ??)
  nna_configure(nna_cmd_clk, 400);

  // Turn on NNA
  nna_on();

  // Map NNA registers
  void* r = xreg_open();
  if (r) {
    nna_reset();
	myProgram();
    xreg_close();
  }

  nna_off();

}
