.. This file gets included from other .rst files in this folder.
.. It contains target-specific snippets.
.. Comments and '---' lines act as delimiters.
..
.. This is necessary mainly because RST doesn't support substitutions
.. (defined in RST, not in Python) inside code blocks. If that is ever implemented,
.. These code blocks can be moved back to the main .rst files, with target-specific
.. file names being replaced by substitutions.

.. gpio-summary

{IDF_TARGET_NAME} 芯片具有 45 个物理 GPIO 管脚（GPIO0 ~ GPIO21 和 GPIO26 ~ GPIO48）。每个管脚都可用作一个通用 IO，或连接一个内部外设信号。通过 GPIO 交换矩阵、IO MUX 和 RTC IO MUX，可配置外设模块的输入信号来源于任何的 GPIO 管脚，并且外设模块的输出信号也可连接到任意 GPIO 管脚。这些模块共同组成了芯片的输入输出控制。更多详细信息，请参阅 *{IDF_TARGET_NAME} 技术参考手册* > *IO MUX 和 GPIO 矩阵（GPIO、IO_MUX）* [`PDF <{IDF_TARGET_TRM_CN_URL}#iomuxgpio>`__]。

下表提供了各管脚的详细信息，部分 GPIO 具有特殊的使用限制，具体可参考表中的注释列。

.. list-table::
    :header-rows: 1
    :widths: 8 12 12 20

    * - GPIO
      - 模拟功能
      - RTC GPIO
      - 注释

    * - GPIO0
      -
      - RTC_GPIO0
      - Strapping 管脚

    * - GPIO1
      - ADC1_CH0
      - RTC_GPIO1
      -

    * - GPIO2
      - ADC1_CH1
      - RTC_GPIO2
      -

    * - GPIO3
      - ADC1_CH2
      - RTC_GPIO3
      - Strapping 管脚

    * - GPIO4
      - ADC1_CH3
      - RTC_GPIO4
      -

    * - GPIO5
      - ADC1_CH4
      - RTC_GPIO5
      -

    * - GPIO6
      - ADC1_CH5
      - RTC_GPIO6
      -

    * - GPIO7
      - ADC1_CH6
      - RTC_GPIO7
      -

    * - GPIO8
      - ADC1_CH7
      - RTC_GPIO8
      -

    * - GPIO9
      - ADC1_CH8
      - RTC_GPIO9
      -

    * - GPIO10
      - ADC1_CH9
      - RTC_GPIO10
      -

    * - GPIO11
      - ADC2_CH0
      - RTC_GPIO11
      -

    * - GPIO12
      - ADC2_CH1
      - RTC_GPIO12
      -

    * - GPIO13
      - ADC2_CH2
      - RTC_GPIO13
      -

    * - GPIO14
      - ADC2_CH3
      - RTC_GPIO14
      -

    * - GPIO15
      - ADC2_CH4
      - RTC_GPIO15
      -

    * - GPIO16
      - ADC2_CH5
      - RTC_GPIO16
      -

    * - GPIO17
      - ADC2_CH6
      - RTC_GPIO17
      -

    * - GPIO18
      - ADC2_CH7
      - RTC_GPIO18
      -

    * - GPIO19
      - ADC2_CH8
      - RTC_GPIO19
      - USB-JTAG

    * - GPIO20
      - ADC2_CH9
      - RTC_GPIO20
      - USB-JTAG

    * - GPIO21
      -
      - RTC_GPIO21
      -

    * - GPIO26
      -
      -
      - SPI0/1

    * - GPIO27
      -
      -
      - SPI0/1

    * - GPIO28
      -
      -
      - SPI0/1

    * - GPIO29
      -
      -
      - SPI0/1

    * - GPIO30
      -
      -
      - SPI0/1

    * - GPIO31
      -
      -
      - SPI0/1

    * - GPIO32
      -
      -
      - SPI0/1

    * - GPIO33
      -
      -
      - SPI0/1

    * - GPIO34
      -
      -
      - SPI0/1

    * - GPIO35
      -
      -
      - SPI0/1

    * - GPIO36
      -
      -
      - SPI0/1

    * - GPIO37
      -
      -
      - SPI0/1

    * - GPIO38
      -
      -
      -

    * - GPIO39
      -
      -
      -

    * - GPIO40
      -
      -
      -

    * - GPIO41
      -
      -
      -

    * - GPIO42
      -
      -
      -

    * - GPIO43
      -
      -
      -

    * - GPIO44
      -
      -
      -

    * - GPIO45
      -
      -
      - Strapping 管脚

    * - GPIO46
      -
      -
      - Strapping 管脚

    * - GPIO47
      -
      -
      -

    * - GPIO48
      -
      -
      -

.. Note::

    - Strapping 管脚：GPIO0、GPIO3、GPIO45 和 GPIO46 是 Strapping 管脚。更多信息请参考 `ESP32-S3 技术规格书 <{IDF_TARGET_DATASHEET_CN_URL}>`_。
    - SPI0/1：GPIO26 ~ GPIO32 通常用于 SPI flash 和 PSRAM，不推荐用于其他用途。当使用八线 flash 或八线 PSRAM 或同时使用两者时，GPIO33 ~ GPIO37 会连接到 SPIIO4 ~ SPIIO7 和 SPIDQS。因此，对于内嵌 ESP32-S3R8 或 ESP32-S3R8V 芯片的开发板，GPIO33 ~ GPIO37 也不推荐用于其他用途。
    - USB-JTAG：GPIO19 和 GPIO20 默认用于 USB-JTAG。如果将它们配置为普通 GPIO，驱动程序将禁用 USB-JTAG 功能。

---
