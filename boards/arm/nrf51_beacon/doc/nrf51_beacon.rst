.. _nrf51_beacon:

Nordic Semiconductor nRF51 Beacon
#################################

Overview
********

The nRF51 Beacon is a development board from Nordic Semiconductor featuring their
nrf51822 Bluetooth Low Energy SoC.

Hardware
********

The nRF51 Beacon has two external oscillators. The frequency of the slow clock
is 32.768 kHz. The frequency of the main clock is 16 MHz.

An RGB LED is connected to pins P0.16 (red), P0.12 (green) and P0.15 (green).

Supported Features
==================

The nrf51_beacon board configuration supports the following nRF51
hardware features:

+-----------+------------+----------------------+
| Interface | Controller | Driver/Component     |
+===========+============+======================+
| NVIC      | on-chip    | nested vectored      |
|           |            | interrupt controller |
+-----------+------------+----------------------+
| RTC       | on-chip    | system clock         |
+-----------+------------+----------------------+
| UART      | on-chip    | serial port          |
+-----------+------------+----------------------+
| GPIO      | on-chip    | gpio                 |
+-----------+------------+----------------------+
| FLASH     | on-chip    | flash                |
+-----------+------------+----------------------+
| RADIO     | on-chip    | Bluetooth            |
+-----------+------------+----------------------+

Connections and IOs
===================

LED
---

* LED0 (red) = P0.16
* LED1 (green) = P0.12
* LED2 (blue) = P0.15

Push buttons
------------

* SW1 = P0.08
* Sw2 = P0.18

Programming and Debugging
*************************

Applications for the ``nrf51_beacon`` board configuration can be built and
flashed in the usual way (see :ref:`build_an_application` and
:ref:`application_run` for more details).

Flashing
========

To flash an application, you'll need to connect your nRF51 Beacon with the
DAPLink board, then attach that to your computer via USB.

Now build and flash applications as usual. Here is an example for the
:ref:`hello_world` application.

.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :board: nrf51_beacon
   :goals: build flash

Debugging
=========

After mounting the nRF51 Beacon on its DAPLink board as described above,
you can debug an application in the usual way. Here is an example for
the :ref:`hello_world` application.

.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :board: nrf51_beacon
   :maybe-skip-config:
   :goals: debug

References
**********

.. target-notes::

