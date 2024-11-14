// import Image from "next/image";
import Card from "@/components/Card";
import { Combobox } from "@/components/ComboBox";
import { Button } from "@/components/ui/button";
import { Checkbox } from "@/components/ui/checkbox";
import { Input } from "@/components/ui/input";
import { Label } from "@/components/ui/label";
import { RadioGroup, RadioGroupItem } from "@/components/ui/radio-group";
import { Textarea } from "@/components/ui/textarea";
import { Search } from "lucide-react";
import localFont from "next/font/local";

const geistSans = localFont({
  src: "./fonts/GeistVF.woff",
  variable: "--font-geist-sans",
  weight: "100 900",
});
const geistMono = localFont({
  src: "./fonts/GeistMonoVF.woff",
  variable: "--font-geist-mono",
  weight: "100 900",
});

export default function Voucher() {
  return (
    <div
      className={`${geistSans.variable} ${geistMono.variable} flex flex-col min-w-screen font-[family-name:var(--font-geist-sans)]`}
    >
      <div className="flex justify-between navbar bg-[#1F2A37] h-28">
        <div className="road"></div>
        <div className="flex flex-col items-center w-[60vw] p-10 justify-center">
          <div className="text-white text-3xl mb-2 font-semibold">Get your gift voucher now!</div>
          <div className="flex items-center gap-8">
            <Button className="bg-[#F0B000] px-3 text-center rounded-2xl text-sm py-1 border border-[#F0B000] h-7" variant="primary">Step 1 - Gift Voucher</Button>
            <Button className="bg-[#FFFFFF] px-3 text-center rounded-2xl text-sm py-1 border border-[#F0B000] h-7" variant="primary">Step 2 - Checkout</Button>
          </div>
        </div>
        <div className="road"></div>
      </div>
      <div className="header flex mx-32 mt-11">
        <div className="w-[50%] pt-14">
          <div className="mb-3 font-semibold"><Label className="text-base">Delivery Method</Label></div>
          <RadioGroup defaultValue="option-one">
            <div className="flex items-center space-x-2">
              <RadioGroupItem value="email" id="email" className="custom-radio" />
              <Label htmlFor="email"> By Email</Label>
            </div>
            <div className="flex items-center space-x-2">
              <RadioGroupItem value="sms" id="sms" className="custom-radio" />
              <Label htmlFor="sms"> By SMS message</Label>
            </div>
            <div className="flex items-center space-x-2">
              <RadioGroupItem value="gift" id="gift" className="custom-radio" />
              <Label htmlFor="gift"> Print Gift Voucher</Label>
            </div>
          </RadioGroup>
          <div className="my-4"><Label className="text-muted-foreground text-sm">The recipient will receive a email with a URL to redeem the Gift Voucher.</Label></div>
          <div className="my-4"><Label className="text-base">Delivery date & time</Label></div>
          <RadioGroup defaultValue="option-one">
            <div className="flex gap-x-14">
              <div className="flex items-center space-x-1">
                <RadioGroupItem value="send" id="send" className="custom-radio" />
                <Label htmlFor="send"> Send</Label>
              </div>
              <div className="flex items-center space-x-1">
                <RadioGroupItem value="datetime" id="datetime" className="custom-radio" />
                <Label htmlFor="datetime"> Choose date/time</Label>
              </div>
            </div>
          </RadioGroup>
          <div className="w-max bg-[#1F2A37] mt-28 px-3 py-2 rounded-lg text-white font-semibold">
            <span className="text-lg font-medium">How many hours of lessons would you like purchase?</span>
            <span className="flex items-center justify-between mt-2">
              <div className="flex items-center gap-4">
                <Combobox />
                <Label className="text-[#F0B000] font-semibold">Lesson Hour/s</Label>
              </div>
              <div>
                <Label className="text-white font-semibold">TOTAL &nbsp;&nbsp;&nbsp;&nbsp;$532</Label>
                <Label className="text-white bg-[#F83B00] ml-3 py-1 px-5 rounded-full text-[0.7rem] font-normal">5% OFF</Label>
              </div>
            </span>
            <div className="text-[0.5rem] ml-4 mt-1 text-muted-foreground">
              Click to edit
            </div>
          </div>
          <div className="form flex flex-col mt-8">
            <Label className="text-base font-semibold">To</Label>
            <Input type="name" placeholder="Recipient first name" />
            <Input type="email" placeholder="Recipient email" />
            <Label className="text-base font-semibold mt-4">From</Label>
            <Input type="name" placeholder="Sender name" />
            <Input type="email" placeholder="Sender email" />
            <Label className="text-base font-semibold mt-4">Message</Label>
            <Textarea placeholder="Type your message here." className="min-h-28"/>
            <Label className="text-xs ml-3 font-light text-muted-foreground">Max. 100 characters</Label>
            <Button className="px-3 text-center rounded-2xl text-sm py-1 border border-[#F0B000] h-7" variant="outline">Continue to payment $000</Button>
          </div>
          <div className="min-h-52"></div>
        </div>
        <div className="w-[50%] previewimg flex flex-col justify-center items-center">
          <div className="w-full h-full p-20 flex flex-col">
            <Label className="text-white text-[1vw]">Recipient's Gift Voucher Preview (Email)</Label>
            <div className="inneremail self-center"></div>
            <Label className="text-white text-[1vw]">Dear (recipient name),</Label>
            <Label className="text-white text-[1vw] mt-6">You have received a 1-hour driving lesson gift voucher
              from (sender's name)</Label>
          </div>
        </div>
      </div>
    </div>
  );
}
