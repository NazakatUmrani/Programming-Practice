// import Image from "next/image";
import Card from "@/components/Card";
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

export default function Home() {
  return (
    <div
      className={`${geistSans.variable} ${geistMono.variable} flex flex-col min-w-screen font-[family-name:var(--font-geist-sans)]`}
    >
      <div className="flex justify-between navbar bg-[#1F2A37] h-30">
        <div className="road"></div>
        <div className="flex items-center w-[60vw] p-10 justify-center">
          <div className="flex items-center gap-3">
            <span className="bg-[#FFFFFF] w-32 text-center rounded-2xl text-sm py-1"><span className="text-green-700">✓ </span>Auto</span>
            <span className="bg-[#F0B000] w-32 text-center rounded-2xl text-sm py-1">Manual</span>
            <span className="bg-[#FFFFFF] text-neutral-400 w-72 rounded-2xl text-sm py-1 text-start pl-2">Enter your suburb</span>
            <span className="bg-[#F3B616] w-7 h-7 flex items-center justify-center rounded-full"><Search size={16} /></span>
          </div>
        </div>
        <div className="road"></div>
      </div>
      <div className="toptext flex flex-col items-center p-9 gap-6">
        <div className="">We have <b>19 auto instructors</b> available in <b>Melbourne, 3000. </b>Lesson prices in Melbourne start from <b>$67.50/hr.</b></div>
        <div className="flex gap-9">
          <div>Time
            <span className="ml-3 buttonDark"><span className="text-green-700">✓ </span>AM</span>
            <span className="buttonLight">AM</span>
            <span className="buttonLight">AM</span>
          </div>
          <div>Day
            <span className="ml-3 buttonDark"><span className="text-green-700">✓ </span>Today - Sat</span>
            <span className="buttonLight">Sun - Wed</span>
            <span className="buttonLight">Custom <span className="relative bottom-1">⌄</span></span>
          </div>
        </div>
        <div className="text-4xl font-bold m-10">Instructor available in the next 7 days</div>

      </div>
      <div className="CardContainer px-48 justify-center">
        <div className="flex flex-wrap">
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
          <Card />
        </div>
      </div>
    </div>
  );
}
