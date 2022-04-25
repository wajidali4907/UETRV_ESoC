
#define UART_BAUD_DIV  217


/** UART module prototype */
typedef struct __attribute__((packed,aligned(4))) {
	uint8_t rx_data;
	uint8_t tx_data;  
	uint8_t baud;  
	uint8_t control; 
	uint8_t status; 
	uint8_t int_mask;   
} Uetrv32_Uart_Struct;

/** UART module hardware access */
#define UART_Module (*((volatile Uetrv32_Uart_Struct*) (0x00002000UL)))


// Function prototypes
void Uetrv32_Uart_Init(uint8_t baud);
void Uetrv32_Uart_Tx(uint8_t tx_data);
void Uetrv32_Uart_Isr(void);
void UETrv32_Uart_Print(const char *s);