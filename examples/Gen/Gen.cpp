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
	uint32_t Placeholder = 1605632; 
	sunxi_ion_loadin(Placeholder, sizeof(Placeholder), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(Placeholder);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_pad_6 = 1692800; 
	sunxi_ion_loadin(lava_pad_6, sizeof(lava_pad_6), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_pad_6);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_conv1_weights = 100352; 
	sunxi_ion_loadin(resnet_v1_50_conv1_weights, sizeof(resnet_v1_50_conv1_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_conv1_weights);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_conv1_BatchNorm_gamma = 256; 
	sunxi_ion_loadin(resnet_v1_50_conv1_BatchNorm_gamma, sizeof(resnet_v1_50_conv1_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_conv1_BatchNorm_gamma);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_conv1_BatchNorm_beta = 256; 
	sunxi_ion_loadin(resnet_v1_50_conv1_BatchNorm_beta, sizeof(resnet_v1_50_conv1_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_conv1_BatchNorm_beta);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_conv1_BatchNorm_moving_mean = 256; 
	sunxi_ion_loadin(resnet_v1_50_conv1_BatchNorm_moving_mean, sizeof(resnet_v1_50_conv1_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_conv1_BatchNorm_moving_mean);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_conv1_BatchNorm_moving_variance = 256; 
	sunxi_ion_loadin(resnet_v1_50_conv1_BatchNorm_moving_variance, sizeof(resnet_v1_50_conv1_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_conv1_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance = 512; 
	sunxi_ion_loadin(alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_conv1_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_conv2d_norm_relu_max_pool2d_2 = 802816; 
	sunxi_ion_loadin(lava_conv2d_norm_relu_max_pool2d_2, sizeof(lava_conv2d_norm_relu_max_pool2d_2), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_relu_max_pool2d_2);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights = 65536; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_weights);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_gamma);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_beta);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_mean);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance = 2048; 
	sunxi_ion_loadin(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_shortcut_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_conv2d_norm_relu_max_pool2d_2 = 802816; 
	sunxi_ion_loadin(lava_conv2d_norm_relu_max_pool2d_2, sizeof(lava_conv2d_norm_relu_max_pool2d_2), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_relu_max_pool2d_2);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights = 16384; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_weights);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_gamma);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_beta);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_mean);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance = 512; 
	sunxi_ion_loadin(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv1_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_conv2d_norm_relu_3 = 802816; 
	sunxi_ion_loadin(lava_conv2d_norm_relu_3, sizeof(lava_conv2d_norm_relu_3), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_relu_3);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights = 147456; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_weights);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_gamma);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_beta);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_mean);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance = 256; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance = 512; 
	sunxi_ion_loadin(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv2_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_conv2d_norm_5 = 3211264; 
	sunxi_ion_loadin(lava_conv2d_norm_5, sizeof(lava_conv2d_norm_5), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_5);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t lava_conv2d_norm_relu_4 = 802816; 
	sunxi_ion_loadin(lava_conv2d_norm_relu_4, sizeof(lava_conv2d_norm_relu_4), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(lava_conv2d_norm_relu_4);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights = 65536; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_weights);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_gamma);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_beta);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_mean);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance = 1024; 
	sunxi_ion_loadin(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance, sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
	uint32_t alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance = 2048; 
	sunxi_ion_loadin(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance, sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance), (uint32_t)(gp_paddr)+data_offset);
	data_offset += sizeof(alu_mul_resnet_v1_50_block1_unit_1_bottleneck_v1_conv3_BatchNorm_moving_variance);
	printf(" % p\n", (uint32_t)(gp_paddr)+data_offset);
	
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

