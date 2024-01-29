/*
 * led.h
 *
 *  Created on: Jan 21, 2024
 *      Author: user
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f4xx_hal_spi.h"

/* Display start line set 	    	0 0 1 0 0 0 0 0 0	*/
/* ADC set 					    	0 1 0 1 0 0 0 0 1 	*/
/* Common output mode select    	0 1 1 0 0 0 0 0 0	*/
/* Display normal/reverse 			0 1 0 1 0 0 1 1 0 	*/
/* LCD bias set 					0 1 0 1 0 0 0 1 0 	*/
/* Power control set 				0 0 0 1 0 1 1 1 1 	*/
/* Booster ratio set (1)			0 1 1 1 1 1 0 0 0	*/
/* Booster ratio set (2)			0 0 0 0 0 0 0 0 0   */
/* Voltage regulator set			0 1 0 0 0 0 0 0 1	*/
/* Electronic volume mode set (1)  	0 1 0 0 0 0 0 0 1	*/
/* Electronic volume mode set (2)	0 0 0 0 1 0 1 1 0	*/
/* Static indicator set	(1)			0 1 0 1 0 1 1 0 0	*/
/* Static indicator set	(2)			0 0 0 0 0 0 0 0 0	*/
/* Display ON/OFF 					0 1 0 1 0 1 1 1 1	*/

#define LED_CMD_INIT_BUF_SIZE			14u

#define LED_CMD_DISP_START_LINE0		0x40 	/* Display start line 0      		  */
#define LED_CMD_ADC_REV					0xA1 	/* ADC reverse               		  */
#define LED_CMD_COMMON_MODE_SEL			0xC0 	/* Normal COM0~COM63          	 	  */
#define LED_CMD_DISP_NORMAL				0xA6 	/* Display normal               	  */
#define LED_CMD_BIAS_SET 		 		0xA2 	/* Set bias 1/9 (Duty 1/65)  	 	  */
#define LED_CMD_PWR_CTRL_SET			0x2F  	/* Booster, Regulator and Follower on */
#define LED_CMD_BOOST_RATIO_SET_1		0xF8    /* Set internal Booster to 4x (1) 	  */
#define LED_CMD_BOOST_RATIO_SET_2 		0x00	/* Set internal Booster to 4x (2) 	  */
#define LED_CMD_VREG_SET  				0x27	/* Contrast set	(1)					  */
#define LED_CMD_EVOLUME_MODE_SET_1		0x81 	/* Contrast set	(2)					  */
#define LED_CMD_EVOLUME_MODE_SET_2		0x16	/* Contrast set	(3)					  */
#define LED_CMD_STATIC_INDIC_SET_1		0xAC	/* No Indicator	(1)					  */
#define LED_CMD_STATIC_INDIC_SET_2		0x00	/* No Indicator	(2)					  */
#define LED_CMD_DISP_ON					0xAF	/* Display ON 						  */

void led_init(SPI_HandleTypeDef *hspi1);

#endif /* INC_LED_H_ */
