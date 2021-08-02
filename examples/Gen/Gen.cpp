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
	printf("Lets goooo!\n");
	sunxi_ion_alloc_open();
	sunxi_ion_alloc_palloc(0x80000, &gp_vaddr, &gp_paddr);
	
	uint32_t  data_offset = 0x00000;
	uint32_t lava_conv2d_norm_relu_max_pool2d_2[] = {802816}; 
	sunxi_ion_loadin((uint32_t*)lava_conv2d_norm_relu_max_pool2d_2, sizeof(lava_conv2d_norm_relu_max_pool2d_2), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_relu_max_pool2d_2);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, lava_conv2d_norm_relu_max_pool2d_2[0]); 
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights[] = {65536}; 
	sunxi_ion_loadin((uint32_t*)resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights[0]); 
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma[] = {1024}; 
	sunxi_ion_loadin((uint32_t*)resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma[0]); 
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta[] = {1024}; 
	sunxi_ion_loadin((uint32_t*)resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta[0]); 
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean[] = {1024}; 
	sunxi_ion_loadin((uint32_t*)resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean[0]); 
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance[] = {1024}; 
	sunxi_ion_loadin((uint32_t*)resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance[0]); 
	
	uint32_t alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance[] = {2048}; 
	sunxi_ion_loadin((uint32_t*)alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance);
	printf("%p %i\n", (uint32_t)(gp_paddr)+data_offset, alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance[0]); 
	
	void *ptr = malloc(sizeof(uint32_t) * 7);
	sunxi_ion_loadout((uint32_t)(gp_paddr), sizeof(uint32_t) * 7, ptr); 
	for (int i = 0; i < 7; i++) {
		printf("%i \n",(*((uint32_t*)ptr + i)));
	}
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

