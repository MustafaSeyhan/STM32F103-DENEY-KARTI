/*
 * adc_test.c
 *
 *  Created on: Jan 16, 2025
 *      Author: Mustafa
 */

#include <main.h>
#include <adc_test.h>
#include <yedisegment_ekran_yazdirma.h>
extern ADC_HandleTypeDef hadc1;
void adc_test()
{
	uint32_t timer_degeri=HAL_GetTick();
	uint16_t adc_degeri=0;

	while(HAL_GetTick() < (timer_degeri+10000) )
	{
		 HAL_ADC_Start(&hadc1);
		adc_degeri = HAL_ADC_GetValue(&hadc1);

	if(adc_degeri < 400){ yedi_segment_yazdir(0);}
	else if(adc_degeri < 800){ yedi_segment_yazdir(1);}
	else if(adc_degeri < 1200){ yedi_segment_yazdir(2);}
	else if(adc_degeri < 1600){ yedi_segment_yazdir(3);}
	else if(adc_degeri < 2000){ yedi_segment_yazdir(4);}
	else if(adc_degeri < 2400){ yedi_segment_yazdir(5);}
	else if(adc_degeri < 2800){ yedi_segment_yazdir(6);}
	else if(adc_degeri < 3200){ yedi_segment_yazdir(7);}
	else if(adc_degeri < 3600){ yedi_segment_yazdir(8);}
	else {yedi_segment_yazdir(9);}
	}
}

