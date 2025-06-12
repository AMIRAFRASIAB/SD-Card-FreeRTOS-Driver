
#ifndef __SD_CARD_CONFIG_H_INCLUDED__
#define __SD_CARD_CONFIG_H_INCLUDED__

#ifdef __cplusplus
  extern "C" {
#endif //__cplusplus


#define YES     1
#define NO      0


/* Task */
#define SD_CARD_STACK_SIZE                        2048
#define SD_CARD_TASK_PRIORITY                     1
                                                  
/* Buffer */                                      
#define SD_CARD_TX_BUFFER_LEN                     512         /* x2 */
                                                  
/* Logger */                                      
#define SD_CARD_LOGGER_ENABLE                     YES

/* SPI */
#define DMAx_STREAMy_FOR_SPI_SD_TX_IRQ_PRIORITY   6
#define DMAx_STREAMy_FOR_SPI_SD_RX_IRQ_PRIORITY   6  
#define SRD_SPI_CS_GPIO                           GPIOA
#define SRD_SPI_CS_PIN                            LL_GPIO_PIN_4

/* Synchronization Time */
#define SD_CARD_SYNCH_TIME_MS                     5000

/* Threshold MB Free Space */
#define SD_CARD_MIN_SPACE_THRESHOLD_IN_MB         200

#ifdef __cplusplus
  }
#endif //__cplusplus
#endif //__SD_CARD_CONFIG_H_INCLUDED__