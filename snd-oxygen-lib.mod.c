#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(oxygen_read8, "", "");
KSYMTAB_FUNC(oxygen_read16, "", "");
KSYMTAB_FUNC(oxygen_read32, "", "");
KSYMTAB_FUNC(oxygen_write8, "", "");
KSYMTAB_FUNC(oxygen_write16, "", "");
KSYMTAB_FUNC(oxygen_write32, "", "");
KSYMTAB_FUNC(oxygen_write8_masked, "", "");
KSYMTAB_FUNC(oxygen_write16_masked, "", "");
KSYMTAB_FUNC(oxygen_write32_masked, "", "");
KSYMTAB_FUNC(oxygen_write_ac97, "", "");
KSYMTAB_FUNC(oxygen_read_ac97, "", "");
KSYMTAB_FUNC(oxygen_write_ac97_masked, "", "");
KSYMTAB_FUNC(oxygen_write_spi, "", "");
KSYMTAB_FUNC(oxygen_write_i2c, "", "");
KSYMTAB_FUNC(oxygen_reset_uart, "", "");
KSYMTAB_FUNC(oxygen_write_uart, "", "");
KSYMTAB_FUNC(oxygen_pci_probe, "", "");
KSYMTAB_DATA(oxygen_pci_pm, "", "");
KSYMTAB_FUNC(oxygen_pci_shutdown, "", "");
KSYMTAB_FUNC(oxygen_update_dac_routing, "", "");

MODULE_INFO(depends, "snd,snd-mpu401-uart,snd-pcm");


MODULE_INFO(srcversion, "483215A2E2638ABD598ACC2");
