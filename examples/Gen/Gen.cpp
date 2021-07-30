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


#include "include/const.h"

static void* gp_vaddr;
static void* gp_paddr;

void myProgram() {
	printf("Lets goooo!\n");
	sunxi_ion_alloc_open();
	sunxi_ion_alloc_palloc(0x80000, &gp_vaddr, &gp_paddr);
	
	uint32_t  data_offset = 0x00000;
	sunxi_ion_loadin( resnet_v1_50_conv1_weights_ARR , sizeof( resnet_v1_50_conv1_weights_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_conv1_BatchNorm_gamma_ARR , sizeof( resnet_v1_50_conv1_BatchNorm_gamma_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_conv1_BatchNorm_beta_ARR , sizeof( resnet_v1_50_conv1_BatchNorm_beta_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_conv1_BatchNorm_moving_mean_ARR , sizeof( resnet_v1_50_conv1_BatchNorm_moving_mean_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_conv1_BatchNorm_moving_variance_ARR , sizeof( resnet_v1_50_conv1_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance_ARR , sizeof( alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance_ARR , sizeof( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance_ARR , sizeof( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance_ARR , sizeof( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance_ARR , sizeof( resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
	sunxi_ion_loadin( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance_ARR , sizeof( alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance_ARR ), (uint32_t)(gp_paddr)+data_offset);
}
int main(int argc, char** argv) {
	nna_configure(nna_cmd_clk, 400);
	nna_on();
	void* r = xreg_open();
	if (r) {
		nna_reset();
		myProgram();
		xreg_close();
	}
	nna_off();
}

