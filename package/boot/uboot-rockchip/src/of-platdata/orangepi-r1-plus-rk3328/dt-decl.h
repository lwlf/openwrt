/*
 * DO NOT MODIFY
 *
 * Declares externs for all device/uclass instances.
 * This was generated by dtoc from a .dtb (device tree binary) file.
 */

#include <dm/device-internal.h>
#include <dm/uclass-internal.h>

/* driver declarations - these allow DM_DRIVER_GET() to be used */
extern U_BOOT_DRIVER(rockchip_rk3328_cru);
extern U_BOOT_DRIVER(rockchip_rk3328_dmc);
extern U_BOOT_DRIVER(rockchip_rk3288_dw_mshc);
extern U_BOOT_DRIVER(ns16550_serial);
extern U_BOOT_DRIVER(rockchip_rk3328_grf);

/* uclass driver declarations - needed for DM_UCLASS_DRIVER_REF() */
extern UCLASS_DRIVER(clk);
extern UCLASS_DRIVER(mmc);
extern UCLASS_DRIVER(ram);
extern UCLASS_DRIVER(serial);
extern UCLASS_DRIVER(syscon);