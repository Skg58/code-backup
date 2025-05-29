import Image from "next/image";

export default function Home() {
  return (
    <>
    <div className="mx-auto px-2 w-[100%]" >i am home</div>
    <Image width={100} height={100} src="http://www.menucool.com/slider/prod/image-slider-3.jpg" alt="" />
    </>
  );
}
