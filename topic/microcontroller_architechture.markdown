EMBEDDED C

# Nền tảng Vi điều khiển

## Microprocessor vs Microcontroller -- Vi xử lý và Vi điều khiển

![A diagram of a bus system Description automatically
generated](./media/image1.png){width="4.061403105861768in"
height="1.4119324146981627in"}

Vi xử lý là một bộ điều khiển máy tính có hiệu năng mạnh mẽ được tích
hợp vào một IC duy nhất. Vi xử lý chỉ thực hiện các hoạt động tính toán
logic như bộ ALU (Arithmetic Logical Unit) và giao tiếp với các ngoại vi
khác được đặt bên ngoài vi xử lý. Đặc trưng của vi xử lý là mạnh về tính
toán, xử lý dung lượng dữ liệu lớn, giá thành cao.

![A diagram of a microcontroller Description automatically
generated](./media/image2.png){width="3.978637357830271in"
height="1.9578379265091863in"}

Vi điều khiển là một tập hợp các thành phần của một máy tính nhỏ, gồm bộ
xử lý trung tâm và các thành phần ngoại vi được tích hợp vào trên một IC
duy nhất. Nhằm tạo nên một phần cứng có khả năng tích hợp cao, dễ giao
tiếp và dễ lập trình theo hướng điều khiển. Đặc trưng của vi điều khiển
là hiệu năng tương đối, khả năng giao tiếp điều khiển cao, giá thành rẻ.

## Tổng quan về Vi điều khiển hiện nay

### Các loại Vi điều khiển hiện nay

[Họ vi điều khiển
AMCC](https://vi.wikipedia.org/w/index.php?title=H%E1%BB%8D_vi_%C4%91i%E1%BB%81u_khi%E1%BB%83n_AMCC&action=edit&redlink=1) (do
tập đoàn \"Applied Micro Circuits Corporation\" sản xuất). Từ [tháng
5](https://vi.wikipedia.org/wiki/Th%C3%A1ng_n%C4%83m) năm [2004](https://vi.wikipedia.org/wiki/2004),
họ vi điều khiển này được phát triển và tung ra thị trường
bởi [IBM](https://vi.wikipedia.org/wiki/IBM). Các vi điều khiển của họ
AMCC sau đây đều thuộc PowerPC 400 family (32-bit RISC):

-   403 [PowerPC](https://vi.wikipedia.org/wiki/PowerPC) CPU

-   PPC 403GCX

-   405 PowerPC CPU

-   PPC 405EP

-   PPC 405GP/CR

-   PPC 405GPr

-   PPC NPe405H/L

-   440 PowerPC Book-E CPU

-   PPC 440GP

-   PPC 440GX

-   PPC 440EP/EPx/GRx

-   PPC 440SP/SPe

Họ vi điều khiển Atmel:

-   Dòng 8051 (8031, 8051, 8751, 8951, 8032, 8052, 8752, 8952) (8-bit
    8051/MCS51)

-   Dòng Atmel AT91 (16/32-bit ARM THUMB)

-   Dòng AT90, Tiny & Mega -- AVR (Atmel Norway design) (8-bit AVR
    RISC-Based)

-   Dòng Atmel AT89 (8-bit 8051/MCS51)

-   Dòng MARC4 (4-bit Harvard)

[Họ vi điều khiển Freescale
Semiconductor](https://vi.wikipedia.org/w/index.php?title=H%E1%BB%8D_vi_%C4%91i%E1%BB%81u_khi%E1%BB%83n_Freescale_Semiconductor&action=edit&redlink=1).
Từ năm 2004, những vi điều khiển này được phát triển và tung ra thị
trường bởi [Motorola](https://vi.wikipedia.org/wiki/Motorola):

-   68HC05 (CPU05) (8-bit Von Neumann)

-   68HC08 (CPU08) (8-bit Von Neumann)

-   68HC11 (CPU11) (8-bit Freescale 68HC11: 8-bit data and 16-bit
    address)

-   68HC12 (CPU12) (16-bit Enhacement of Freescale 68HC11)

-   68HC16 (CPU16) (16-bit Freescale 68HC11)

-   Freescale DSP56800 (DSPcontroller) (16-bit DSP56800E)

-   Freescale 683XX (CPU32) (32-bit 68000)

-   MPC500 (32-bit RISC)

-   MPC 860 (32-bit PowerQUICC)

-   MPC 8240/8250 (32-bit PowerQUICC II)

-   MPC 8540/8555/8560 (32-bit PowerQUICC III)

Họ vi điều khiển Fujitsu:

-   F²MC Family (8/16-bit Core Sub-Architecture: F~­~^2^MC)

-   FR Family (32-bit RISC)

-   FR-V Family (32 bit RISC)

Họ vi điều khiển Intel:

-   8XC42 (8-bit 8051/MCS51)

-   MCS48 (8-bit modified Harvard)

-   MCS51 (8-bit 8051/MCS51)

-   8061 (8-bit 8051/MCS51)

-   8xC251 (8-bit 8051/MCS51)

-   MCS96 (16-bit MCS-96)

-   MXS296 (16-bit MCS-96)

-   i960 (32-bit RISC)

Họ vi điều khiển Microchip:

-   Instruction 12-bit (Base-line): PIC10F, PIC12F và một vài PIC16F
    (8-bit RISC)

-   Instruction 14-bit (Mid-Range và Enhance Mid-Range): PIC16Fxxx,
    PIC16F1xxx (8-bit RISC)

-   Instruction 16-bit (High Performance): PIC18F (8-bit RISC)

-   PIC điều khiển động cơ: dsPIC30F (16-bit Modified Harvard)

-   PIC có DSC: dsPIC33F (16-bit Modified Harvard)

-   Phổ thông: PIC24F, PIC24E, PIC24H (16-bit Modified Harvard)

-   PIC32MX (32-bit M4K -- Harvard)

Họ vi điều khiển National Semiconductor:

-   COP8 (8-bit CISC)

-   CR16 (16-bit RISC)

Họ vi điều khiển STMicroelectronics:

-   ST 62 (8-bit Harvard)

-   ST7 (16-bit von Neumann)

-   STM8 (8-bit Harvard)

-   STM32 (32-bit ARM)

Họ vi điều khiển Philips Semiconductors

-   LPC2000 (32-bit ARM)

-   LPC900 (8-bit 80C51)

-   LPC700 (32-bit ARM)

TI

### Phân loại Vi điều khiển

[Phân loại theo số bit cấu tạo:]{.underline} số bit của Vi điều khiển
được xác định là số bit của thanh ghi, độ dài tập lệnh, số bit bộ ALU
trong CPU xử lý được, số bit của databus hoặc addressbus.

+------------+---------------------------------------------------------+
| **Số bit   | **Dòng Vi điều khiển**                                  |
| cấu tạo Vi |                                                         |
| điều       |                                                         |
| khiển**    |                                                         |
+============+=========================================================+
| **4-bit**  | Am2900, MARC4, S1C6x, TLCS-47, TMS1000, μCOM-4          |
+------------+---------------------------------------------------------+
| **8-bit**  | 6800 (68HC05, 68HC08, 68HC11, S08, RS08)                |
|            |                                                         |
|            | 6502 (65C134, 65C265, MELPS 740)                        |
|            |                                                         |
|            | 78K, 8048, 8051(XC800)                                  |
|            |                                                         |
|            | AVR, COP8, H8, PIC10/12/16/17/18, ST6/ST7, STM8, Z8,    |
|            | Z80(eZ80, Rabbit 2000, TLCS-870)                        |
+------------+---------------------------------------------------------+
| **16-bit** | 68HC12/16, C166, CR16/C, H8S, MSP430, PIC24/dsPIC, R8C, |
|            | RL78, TLCS-900, Z8000                                   |
+------------+---------------------------------------------------------+
| **32-bit** | Am29000, ARM/Cortex-M (EFM32, LPC, SAM, STM32, XMC)     |
|            | AVR32, CRX, FR(FR-V), H8SX, M32R, 68000(ColdFire),      |
|            | PIC32, PowerPC(MPC5xx), Propeller, SuperH, TLCS-900,    |
|            | TriCore, V850RX, Z80000                                 |
+------------+---------------------------------------------------------+
| **64-bit** | PowerPC64                                               |
+------------+---------------------------------------------------------+

[Phân loại theo kiến trúc phần cứng:]{.underline}

-   Kiến trúc Harvard và kiến trúc Von-Neumann: (*đây là hai kiến trúc
    VĐK cơ bản)*

    -   Harvard: kiến trúc có bus địa chỉ và bus dữ liệu riêng biệt giúp
        đẩy nhanh quá trình truyền nhận dữ liệu. Hầu hết các vi điều
        khiển ngày nay được xây dựng dựa trên kiến trúc Harvard, kiến
        trúc này định nghĩa bốn thành phần cần thiết của một hệ thống
        nhúng bao gồm: lõi CPU, bộ nhớ chương trình (thông thường là ROM
        hoặc bộ nhớ flash), bộ nhớ dữ liệu (RAM), một hoặc vài bộ định
        thời và các cổng vào/ra để giao tiếp với các thiết bị ngoại vi
        và các môi trường bên ngoài - tất cả các khối này được thiết kế
        trong một IC.

    -   Von-Neumann: chỉ có một bus duy nhất dùng chung cho dữ liệu và
        địa chỉ.

    -   Khác biệt về nơi lưu của program data vs instruction.
        [Difference Between Von Neumann and Harvard Architecture
        (byjus.com)](https://byjus.com/gate/difference-between-von-neumann-and-harvard-architecture/)

-   Kiến trúc Vi điều khiển hiện nay: 68000, 8051, ARC, ARM, AVR, CISC,
    MIPS, PIC, RISC, RISC-V. Ngoài ra còn có các phiên bản khác của các
    kiến trúc này.

## Vi điều khiển kiến trúc ARM

### Tổng quan kiến trúc ARM

ARM -- Advance RISC Machine là kiến trúc vi điều khiển được phát triển
dựa kiến trúc Harvard, bao gồm hai bus là bus dữ liệu và bus địa chỉ,
được phát triển bởi công ty Arm.

ARM được phát triển lên từ RISC -- Reduced Instruction Set Computer, đây
là kiến trúc máy tính được thiết kế để đơn giản hóa các instruction (tập
lệnh), trong đó thời gian thực thi tất cả các lệnh đều như nhau. Mục
tiêu của RISC chính là đơn giản hóa các tập lệnh, để mỗi lệnh có thể
được thực thi chỉ trong 1 chu kỳ máy.

Công ty Arm không trực tiếp sản xuất ra vi điều khiển mà chỉ thiết kế và
bán license (bản quyền bản thiết kế) của kiến trúc Vi điều khiển ARM cho
các công ty sản xuất Vi điều khiển khác. Hiện nay có hơn 200 công ty đã
mua kiến trúc ARM và cung cấp ra thị trường các Vi điều khiển ARM của
chính họ.

![Figure
02](./media/image3.jpeg){width="5.307880577427822in"
height="3.158333333333333in"}

Hiện nay các Vi điều khiển ARM sẽ được build dựa trên một phiên bản được
phát triển từ kiến trúc ARM gốc (ARM based). Tập hợp các phiên bản của
kiến trúc ARM được phân ra thành các family.

![A diagram of a computer Description automatically generated with
medium
confidence](./media/image4.png){width="6.466305774278215in"
height="3.9374015748031495in"}

Vi điều khiển ARM sử dụng kiến trúc Cortex-M:

![A diagram of a computer system Description automatically
generated](./media/image5.png){width="4.748830927384077in"
height="8.00265857392826in"}

### Các thành phần của ARM Cortex-M Based microcontroller

### Lúc trình bày tick các phần đã đi qua. {#lúc-trình-bày-tick-các-phần-đã-đi-qua. .list-paragraph}

![A diagram of a computer chip Description automatically
generated](./media/image6.png){width="5.2830150918635175in"
height="5.572165354330709in"}

Vi điều khiển ARM Cortex-M Based gồm có những thành phần chính sau: ARM
Core (Gồm Các Core Register, bộ ALU), Memory, Peripherals, Bus dữ liệu
và Bus địa chỉ cho ARM Core giao tiếp với các thành phần bên ngoài.

**[Core Registor]{.underline}**

Bộ xử lý Cortex-M là load/store machine và chỉ thực hiện các hoạt động
này trên các thanh ghi của CPU.

![](./media/image7.png){width="6.771438101487314in"
height="5.9762839020122485in"}

**R0-R12** là các general-purpose register dùng để làm toán hạng cho các
lệnh hợp ngữ ARM. **R13** là thanh ghi Stack Pointer (**SP**), lưu trữ
trạng thái trước đó được thực thi tùy theo CPU mode hiện tại (context
switching mode in RTOS) hoặc trỏ vào vùng thực thi code để chuyển lại
context khi hoàn thành xong một phần code.

*Ví dụ:*

![A white background with black text and numbers Description
automatically
generated](./media/image8.png){width="1.5327099737532808in"
height="1.3339293525809275in"}

Trình biên dịch arm-none-eabi-gcc cho đối tượng -mcpu=cortex-m4 sẽ sử
dụng các thanh ghi R0-R12 để thành các toán hạng như sau:

![A screenshot of a computer code Description automatically
generated](./media/image9.png){width="6.889583333333333in"
height="2.097916666666667in"}

Ta có thể thấy, tất cả các hoạt động đều liên quan đến một thanh ghi.
Dòng 1 sẽ lưu giá trị 3 và thanh ghi R3, sau số lưu giá trị trong R3 vào
địa chỉ bộ nhớ được lưu trong R7 cộng thêm offset là 7 địa chỉ ô nhớ (R7
lúc này được gọi là frame pointer lưu một địa chỉ của ô nhớ mà CPU quản
lý).

**R14 (LR)** -- Link Register: lưu địa chỉ của trong FLASH của lệnh theo
lệnh gọi hàm trên Stack.

**R15 (PC**) -- Program Counter: Thanh ghi chứa địa chỉ của lệnh hợp ngữ
hiện tại trong vùng chứa code để fetch~­~ $\rightarrow$ decode
$\rightarrow$ execute.

Các thanh ghi đặc biệt:

-   **PSR** -- Program Status Register: Chứa các cờ trạng thái của
    chương trình.

    *Ví dụ: Thanh ghi PSR của STM32 là CPSR -- Control Program Status
    Register:*

![A close-up of several different types of text Description
automatically
generated](./media/image10.png){width="5.852308617672791in"
height="1.1786023622047244in"}

-   **PRIMASK, FAULTMASK, BASEPRI** -- Eception mask register: chưa gặp.

-   **CONTROL** -- Control Register: chưa gặp.

-   **S0 -- S15, S16 -- S31, FPSCR** -- Floating Point Register: có trên
    Cortex-M4/M7 Core.

**[Memory]{.underline}**

Phân loại và đặc điểm của từng loại Memory: [embedded_c/topic/memory.md
at develop · Hnit3003/embedded_c
(github.com)](https://github.com/Hnit3003/embedded_c/blob/develop/topic/memory.md)

Kiến trúc SRAM DRAM, ứng dụng cụ thể từng loại.

Vi điều khiển ARM Cortex-M sử dụng hai loại memory chính:

-   FLASH: chứa code thực thi và các dữ liệu không thay đổi.

-   SRAM: tạo các segment để thực thi code.

**[Memory map]{.underline}**

ARM xác định một không gian địa chỉ bộ nhớ được tiêu chuẩn hóa chung cho
tất cả các lõi Cortex-M. Không gian địa chỉ rộng 4GB được chia thành
nhiều phân vùng nhỏ tương ứng với một chức năng đặc biệt của từng vùng
này. *Lưu ý: do bus địa chỉ có 32-bit* $\rightarrow$ *2^2^.2^30^ địa chỉ
được quản lý. Mà mỗi địa chỉ trỏ tới 1 byte vùng nhớ nên có dung lượng
là không gian địa chỉ là 4GB. (GiB -- 1024 và GB - 1000)*

![A diagram of a computer Description automatically
generated](./media/image11.png){width="6.961872265966754in"
height="5.583672353455818in"}

![A diagram of a ram Description automatically
generated](./media/image12.png){width="5.2630850831146105in"
height="3.9755621172353455in"}![](./media/image13.png){width="5.872491251093614in"
height="5.995020778652669in"}

**[Peripheral]{.underline}**

Peripherals -- Các ngoại vi mà Vi xử lý ARM Cortext-M có thể truy xuất
đến thông qua Memory map (512MB Peripheral) và điều khiển theo lệnh của
vùng chứa code.

Các ngoại vi có thể được tích hợp trong Vi điều khiển:

-   GPIO.

-   Timer.

-   RTC.

-   ADC.

-   UART.

-   Ethernet.

-   USB.

-   CAN.

-   SPI.

-   I^2^C.

-   I^2^S.

-   Interrupt.

-   DMA.

-   ...

## Memory map của STM32F103C8T6

Memory map được định nghĩa theo chuẩn của ARM Cortex-M Based
Microcontroller có không gian địa chỉ rộng 4GB, có nghĩa là Cortex-M CPU
có thể quản lý tối đa được 2^2­^.2^30^ địa chỉ, nhưng thực tế ta chỉ cần
một vùng rất nhỏ trong không gian này để lưu trữ.

STM32F1 có memory map như sau:

-   0x0000 0000 -- 0x0800 0000 (128MB): lưu địa chỉ đầu tiên được nạp
    vào PC và SP khi khởi động.

-   0x0800 0000 -- 0x0801 0000 (64KB): FLASH memory -- lưu code thực thi
    chương trình và các dữ liệu ít bị thay đổi.

-   0x1FFF F000 -- 0x1FFF F800 (2KB): system memory -- chứa dữ liệu của
    hệ thống bao gồm chương trình bootloader của nhà sản xuất.

-   0x1FFF F800 - 0x1FFF F80F (16-Bytes): option bytes -- chứa các cờ
    liên quan đến quá trình nạp code nhưng chưa xem rõ là gì.

-   0x2000 0000 -- 0x2000 5000 (20KB): SRAM -- chứa dữ liệu trong lúc
    thực thi code.

-   0x4000 0000 -- 0x4002 3400 (141KB): peripheral memory.

-   0xE000 0000 -- 0xE010 0000 (1MB): Cortex-M3 Internal Peripheral.

![altoparlante risorsa fatica stm32f103 memory map Assimilazione
flessibile
neve](./media/image14.png){width="7.523810148731409in"
height="10.369221347331584in"}

## Kiến trúc hệ thống của Vi điều khiển STM32F103 (xem lại)

![A diagram of a computer system Description automatically
generated](./media/image15.png){width="7.55045384951881in"
height="5.770340113735783in"}

4 Masters:

-   Cortex®-M3 core: DCode bus (D-bus) và System bus (S-bus).

-   GP-DMA1 & 2 (general-purpose DMA).

4 Slaves:

-   Internal SRAM.

-   Internal FLASH (qua FLITF -- FLASH Interface).

-   FSMC -- Flexible Static Memory Controller.

-   AHB -- Advanced High-performance Bus

    -   AHB1 -- Advanced Peripheral Bus 1.

    -   AHB2 -- Advanced Peripheral Bus 2.

**Decode Bus:** Kết nối Cortex-M3 Core với bộ nhớ Flash và các chuẩn kết
nối dữ liệu bộ nhớ.

**System Bus:** Bus này kết nối bus hệ thống của Cortex-M3 core (bus
thiết bị ngoại vi) với BusMatrix quản lý data giữ Core và DMA.

**DMA bus:** Bus này kết nối AHB Bus của DMA với BusMatrix quản lý quyền
truy cập của CPU DCode và DMA tới SRAM, bộ nhớ Flash và thiết bị ngoại
vi.

**AHB/APB bridges (APB):** Cung cấp kết nối đồng bộ giữa AHB và 2 bus
APB1/2. APB1 có tốc độ tối đa 36 MHz, APB2 hoạt động ở tốc độ tối đa lên
đến 72 MHz. Sau mỗi lần reset thiết bị, tất cả các clock ngoại vi đều bị
tắt (ngoại trừ SRAM và FLITF). Trước khi sử dụng thiết bị ngoại vi, phải
bật clock của nó trong thanh ghi RCC_AHBENR, RCC_APB2ENR hoặc
RCC_APB1ENR.

## STM32 Booting Process

### Reset

### Power on Reset Circuit

**Bước 1:** Đọc giá trị ở hai chân BOOT0 và BOOT1 để xác định boot mode

STM32 có hai chân BOOT0 và BOOT1 dùng để xác định chế độ boot khi khởi
động Vi điều khiển, cụ thể xét mức logic ở bảng sau:

![A white rectangular box with black text Description automatically
generated](./media/image16.png){width="6.486750874890639in"
height="1.3573720472440944in"}

**Bước 2:** Fetch SP -- Stack Pointer từ địa chỉ 0x0000 0000

Con trỏ Stack -- Stack Pointer là Core Register R13 trong ARM Core sẽ
được nạp địa chỉ của đỉnh của Stack Segment trong SRAM.

**Bước 3:** Fetch PC -- Program Counter từ địa chỉ 0x0000 0004

Thanh ghi PC là Core Register R15 trong ARM Core sẽ được nạp địa chỉ ô
nhớ chứa mã hợp ngữ được bắt đầu boot.

![](./media/image17.png){width="6.15541447944007in"
height="0.5404057305336832in"}

Tại sao lại chia ra boot mode

Địa chỉ được nạp vào PC sẽ tùy thuộc vào Boot mode ở Bước 1 đã xác định
được:

![A diagram of a flash memory Description automatically
generated](./media/image18.png){width="5.723405511811023in"
height="3.16544072615923in"}

![A diagram of a system memory Description automatically
generated](./media/image19.png){width="5.313984033245844in"
height="2.855978783902012in"}

![A diagram of a boot from main sram memory Description automatically
generated](./media/image20.png){width="5.3080850831146105in"
height="2.9528597987751533in"}

##  Clock

### Tổng quan Clock

Hầu hết các mạch điện kỹ thuật số cần một cách để đồng bộ chu kỳ hoạt
động của các thành phần bên trong của nó, hoặc đồng bộ hoạt động nó với
các mạch khác. Clock là một tín hiệu có chu kỳ, nó được xem là nhịp tim
của thiết bị điện kỹ thuật số.

![](./media/image21.png){width="6.635688976377953in"
height="2.0727755905511813in"}

Clock có tín hiệu là xung vuông với 50% duty cycle. Thông số quan trọng
của clock là tần số (frequency).

### Clock tree của STM32F1

Vi điều khiển STM32F1 có hai nguồn xung clock:

-   Bộ dao động RC bên trong Vi điều khiển -- có tên là HSI -- High
    Speed Internal.

-   Bộ dao động thạch anh bên ngoài -- có tên là HSE -- High Speed
    External.

Thạch anh mang lại nguồn clock có độ chính xác cao hơn so với bộ dao
động RC bên trong, được đánh giá sai số 1%, đặc biệt khi nhiệt độ môi
trường bên ngoài có sự khác biệt so với bên trong vi điều khiển.

Có hai nguồn xung clock tốc độ thấp: LSE -- Low Speed External từ thạch
anh ngoài hoặc LSI -- Low Speed Internal từ bộ dao động RC nội Vi điều
khiển. Nguồn clock tốc độ thấp này cấp cho RTC -- Real Time Clock và
IWDT -- Independent Watchdog.

Tần số xung clock tốc độ cao không được đưa trực tiếp vào Cortex-M core
hay bất kỳ ngoại vi nào khác mà nguồn clock này sẽ được đưa qua một mạng
lưới phân bổ clock phức tạp, được gọi là clock tree. Bằng cách sử dụng
Phase-Locked Loops -- Vòng khóa pha (PLL) có thể lập trình và bộ
Prescaller để tăng giảm tần số theo mục đích của từng ngoại vi và bus.

https://electronics.stackexchange.com/questions/177844/why-do-we-use-32-768-khz-crystals-in-most-circuits#:\~:text=The%20frequency%20of%20a%20real,a%2015%20stage%20binary%20counter.

![A diagram of a computer flow Description automatically generated with
medium
confidence](./media/image22.png){width="6.5343186789151355in"
height="1.4608530183727033in"}

![A diagram of a computer Description automatically
generated](./media/image23.png){width="7.580784120734908in"
height="8.058356299212598in"}

*Ví dụ:*

-   Trong CubeMX, cấu hình xung clock cho Vi điều khiển STM32F103, chọn
    nguồn xung clock từ thạch anh 8MHz bên ngoài.

![A diagram of a computer Description automatically
generated](./media/image24.png){width="7.799478346456693in"
height="3.40249343832021in"}

-   Cấu hình sử dụng nguồn xung clock nội (HSI) để cấp cho Vi điều
    khiển.

![](./media/image25.png){width="7.6569083552056in"
height="3.3310378390201225in"}

-   Cấu hình sử dụng nguồn xung clock 72MHz bằng cách sử dụng thạch anh
    8MHz bên ngoài đưa qua bộ PLL để nhân tần số.

![](./media/image26.png){width="7.7982086614173225in"
height="3.353205380577428in"}

##  

## Interrupt

## DMA -Direct Memory Acsess

**[Sự cần thiết của DMA và tầm quan trọng của Internal
Buses]{.underline}**

Mỗi ngoại vi trong STM32 đều cần trao đổi dữ liệu với Cortex-M core, một
vài ngoại vi trong số đó chuyển dữ liệu thành tín hiệu I/O để trao đổi
với thế giới bên ngoài Vi điều khiển thông qua một số protocol (UART,
SPI, I^2^C, CAN,...). Một số ngoại vi khác chỉ được thiết kế để truy cập
đến thanh ghi bên trong vùng nhớ peripheral để thay đổi trạng thái của
các bit thanh ghi. Cả quá trình truyền dữ liệu và thay đổi trạng thái
thanh ghi đều phải được CPU quản lý.

Các ngoại vi có thể được thiết kế có vùng lưu trữ riêng để giảm chi phí
liên quan đến bộ nhớ ngoài. Tuy nhiên điều này làm cho kiến trúc MCU rất
phức tạp, đòi hỏi chi phí cao và các thành phần sẽ tiêu thụ năng lượng
lớn hơn rất nhiều.

$\rightarrow$ Vì vậy phương pháp được áp dụng trong tất cả Vi điều khiển
nhúng là sử dụng một phần của bộ nhớ trong -- internal memory (SRAM hoặc
FLASH) làm vùng lưu trữ tạm thời cho các ngoại vi.

*Ví dụ quá trình nhận một chuỗi 20 bytes từ bên ngoài thông qua chuẩn
UART:*

![A black text on a white background Description automatically
generated](./media/image27.png){width="4.872988845144357in"
height="0.7190857392825897in"}

Chuỗi buf\[20\] sẽ được lưu trong Internal Memory, hàm
HAL_UART_Receive() sẽ truy cập vào thanh ghi dữ liệu
huart2.Instance-\>DR 20 lần để chuyển từng byte dữ liệu trong thanh ghi
DR sang vùng lưu trữ của buf\[20\]. Tất cả quá trình này đều có sự tham
gia của CPU, ngay cả khi vai trò của CPU là hạn chế chuyển dữ liệu từ
ngoại vi sang Internel Memory.

![A diagram of a diagram Description automatically
generated](./media/image28.png){width="2.6822309711286088in"
height="1.3131321084864391in"}

Có thể thấy, mặc dù phương pháp trên giúp ích trong việc đơn giản hóa
thiết kế phần cứng nhưng lại làm cho hiệu suất bị hạn chế rất nhiều.
[Cortex-M chịu trách nhiệm tải dữ liệu từ bộ nhớ ngoại vi sang SRAM và
đây là một hoạt động chặn, nó không chỉ ngăn CPU thực hiện các hoạt động
khác mà còn yêu cầu CPU phải đợi các đơn vị chậm hơn phải hoàn thành
công việc của chúng (do một số ngoại vi được kết nối với core bằng các
bus có tốc độ chậm hơn). Giải quyết vấn đề này bằng cách sử dụng DMA --
Direct Memory Access.]{.underline}

DMA là một đơn vị phần cứng lập trình cho phép ngoại vi của MCU truy cập
trực tiếp đến Internal Memory trong MCU đó mà không cần CPU can thiệp.

![](./media/image29.png){width="3.4176115485564305in"
height="3.7898775153105864in"}

Ở tất cả STM32 MCU, DMA controller là một đơn vị phần cứng có những đặc
điểm sau:

-   Có hai master ports, có tên là *peripheral* và *memory* được kết nối
    với AHB bus. Một port giao tiếp với slave peripheral và port còn lại
    giao tiếp với memory controller (SRAM, FLASH, FSMC,...). Một số DMA
    controller thì peripheral port cũng có thể giao tiếp với memory
    controller cho phép truyền memory to memory.

-   Có một slave port, kết nối với AHB bus, sử dụng cho việc lập trình
    DMA controller từ master là CPU.

-   Một số independent và programmable *channels* (request source), mỗi
    channel kết nối với một peripheral request line.

-   Cho phép gán các mức độ ưu tiên khác nhau cho các channel, dùng để
    ưu tiên các thiết bị ngoại vi quan trọng và cần tốc độ cao hơn.

-   Cho phép truyền dữ liệu theo cả hai hướng, đó là memory to
    peripheral và peripheral to memory.

Mỗi lần truyền DMA trải qua 4 giai đoạn:

Giai đoạn 1: Lấy mẫu và phân xử (sample and arbitration phase).

Giai đoạn 2: Chọn lọc địa chỉ (address computation phase).

Giai đoạn 3: Truy cập bus (bus access phase).

Giai đoạn 4: Xác nhận cuối cùng (báo hiệu quá trình truyền đã hoàn tất
hay chưa) (final acknowledgement phase).

Mỗi giai đoạn chiếm 1 chu kỳ máy duy nhất, ngoại trừ giai đoạn truy cập
bus có thể kéo dài với nhiều chu kỳ hơn tương ứng với lượng dữ liệu gửi.

![A diagram of a bus matrix Description automatically
generated](./media/image30.png){width="5.048927165354331in"
height="3.2814720034995624in"}

![A diagram of a bus architecture Description automatically
generated](./media/image31.png){width="4.776152668416448in"
height="4.753525809273841in"}

## Watchdog

### Tổng quan Watchdog

Watchdog là bộ ngoại vi tích hợp trên vi điều khiển STM32, một loại
Timer có khả năng giúp cho người dùng phát hiện ra hệ thống bị treo,
chạy sai và tạo ra một ngắt hoặc một tín hiệu reset chip.

Đối với các sản phẩm nhúng thì do nhiều yếu tố bên trong (code chưa chặt
chẽ, code có bug...) và yếu tố bên ngoài (nhiễu, điều kiện nhiệt độ, độ
ẩm) dẫn đến việc hoạt động sai của VĐK dẫn đến các hiện tượng chạy chức
năng bị sai, hoặc treo chip. Trong trường hợp như vậy chúng ta cần có
các biện pháp khắc phục tạm thời ví dụ như reset chip để chạy lại chương
trình. Bộ Watchdog Timer được sinh ra với mục đích tạo ra một tín hiệu
reset bằng Software (điều khiển reset hệ thống bằng phần mềm).

Trong STM32 có 2 loại Watchdog Timer:

-   Independent Watchdog Timer - IWDG: Timer này sử dụng nguồn xung LSI
    (Low-speed clock) và có thể hoạt động ngay cả khi nguồn clock của
    chương trình chính không hoạt động. Điều này phù hợp với chức năng
    kiểm soát lỗi treo chip kể cả do phần cứng hoặc phần mềm. Khi ngắt
    IWDG sảy ra, MCU sẽ lập tức bị reset.

-   Window Watchdog Timer - WWDG: Timer này có nguồn xung từ bộ APB1
    Clock nghĩa là bộ Timer này sẽ hoạt động khi chương trình hoạt động.
    Một khi xảy ra treo hệ thống liên quan tới Clock chính. Bộ Timer này
    sẽ không hoạt động. Vậy nên chức năng chính của WWDG là kiểm soát
    lỗi phần mềm, nếu các Task hoạt động bất thường như kết thúc sớm hơn
    hoặc muộn hơn dự kiến, ngắt WWDG sẽ xảy ra, ngắt WWDG cho phép
    chương trình thực thi một số lệnh trong ngắt trước khi Reset hoàn
    toàn MCU.

### Independent Watchdog Timer -- IWDG

![](./media/image32.png){width="4.870218722659668in"
height="1.8585465879265093in"}

-   **IWDG_PR -- Prescaller Register:** Thanh ghi hệ số chia xác định
    thời gian mỗi 1 lần giảm của counter.

-   **IWDG_SR -- Status Register:** Thanh ghi trạng thái lưu trạng thái
    prescaler update và reload update khi có sự khiện ghi vào 2 thanh
    ghi này.

-   **IWDG_RLR -- Reload Register:** Thanh ghi lưu giá trị nạp lại vào
    bộ 12-bit reaload counter.

-   **IWDG_KR -- Key Register:** Thanh ghi điều khiển việc chạy và
    reload cho bộ IWDG.

Giới thiệu cách dùng nó như thế nào (lúc trình bày)

Cơ chế hoạt động:

IWDG_PR và IWDG_RLR được nạp vào giá trị là số chu kì tràn của bộ
downcounter. Khi nạp vào thanh ghi IWDG_KR giá trị 0xCCCC thì timer sẽ
bắt đầu hoạt động. Trước khi bộ downcounter đếm từ giá trị reload xuống
0, nếu ghi vào IWDG_KR giá trị 0xAAAA thì bộ counter sẽ đếm lại từ đầu
từ giá trị reload. Nếu downcounter đếm đến 0, một sự kiện reset sẽ được
sinh ra và reset chip.

Vậy nên để chip không bị reset chúng ta cần nạp 0xAAAA vào IWDG_KR trước
khi counter đếm đến 0.

*Lưu ý: Trong chế độ Debug để chip không reset liên tục ta cần enable
bit DBG_IWDG_STOP để tắt timer này đi.*
