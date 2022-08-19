<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace fixtures\basic;

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): void;
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceAsyncClientIf extends RenamedServiceAsyncIf {
}

/**
 * Original thrift service:-
 * FooService
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/FooService'))>>
interface RenamedServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public function simple_rpc(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * FooService
 */
trait RenamedServiceClientBase {
  require extends \ThriftClientBase;

}

class RenamedServiceAsyncClient extends \ThriftClientBase implements RenamedServiceAsyncClientIf {
  use RenamedServiceClientBase;

  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public async function simple_rpc(): Awaitable<void> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("FooService", "simple_rpc", $args);
    $currentseqid = $this->sendImplHelper($args, "simple_rpc", false);
    await $this->genAwaitResponse(\fixtures\basic\RenamedService_simple_rpc_result::class, "simple_rpc", true, $currentseqid, $rpc_options);
  }

}

class RenamedServiceClient extends \ThriftClientBase implements RenamedServiceClientIf {
  use RenamedServiceClientBase;

  /**
   * Original thrift definition:-
   * void
   *   simple_rpc();
   */
  public async function simple_rpc(): Awaitable<void> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = \fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("FooService", "simple_rpc", $args);
    $currentseqid = $this->sendImplHelper($args, "simple_rpc", false);
    await $this->genAwaitResponse(\fixtures\basic\RenamedService_simple_rpc_result::class, "simple_rpc", true, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_simple_rpc(): int {
    $args = \fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
    return $this->sendImplHelper($args, "simple_rpc", false);
  }
  public function recv_simple_rpc(?int $expectedsequenceid = null): void {
    $this->recvImplHelper(\fixtures\basic\RenamedService_simple_rpc_result::class, "simple_rpc", true, $expectedsequenceid);
  }
}

abstract class RenamedServiceAsyncProcessorBase extends \ThriftAsyncProcessor {
  abstract const type TThriftIf as RenamedServiceAsyncIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = RenamedServiceStaticMetadata::class;

  protected async function process_simple_rpc(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('simple_rpc');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'simple_rpc', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\fixtures\basic\RenamedService_simple_rpc_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\fixtures\basic\RenamedService_simple_rpc_args');
    } else {
      $args = \fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'simple_rpc', $args);
    $result = \fixtures\basic\RenamedService_simple_rpc_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\fixtures\basic\RenamedService', 'simple_rpc', $args);
      await $this->handler->simple_rpc();
      $this->eventHandler_->postExec($handler_ctx, 'simple_rpc', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'simple_rpc', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'simple_rpc', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'simple_rpc', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("simple_rpc", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'simple_rpc', $result);
  }
  protected async function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = RenamedServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class RenamedServiceAsyncProcessor extends RenamedServiceAsyncProcessorBase {
  const type TThriftIf = RenamedServiceAsyncIf;
}

abstract class RenamedServiceSyncProcessorBase extends \ThriftSyncProcessor {
  abstract const type TThriftIf as RenamedServiceIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = RenamedServiceStaticMetadata::class;

  protected function process_simple_rpc(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('simple_rpc');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'simple_rpc', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\fixtures\basic\RenamedService_simple_rpc_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\fixtures\basic\RenamedService_simple_rpc_args');
    } else {
      $args = \fixtures\basic\RenamedService_simple_rpc_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'simple_rpc', $args);
    $result = \fixtures\basic\RenamedService_simple_rpc_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, '\fixtures\basic\RenamedService', 'simple_rpc', $args);
      $this->handler->simple_rpc();
      $this->eventHandler_->postExec($handler_ctx, 'simple_rpc', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'simple_rpc', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'simple_rpc', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'simple_rpc', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'simple_rpc', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("simple_rpc", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'simple_rpc', $result);
  }
  protected function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = RenamedServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
class RenamedServiceSyncProcessor extends RenamedServiceSyncProcessorBase {
  const type TThriftIf = RenamedServiceIf;
}
// For backwards compatibility
class RenamedServiceProcessor extends RenamedServiceSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class FooService_simple_rpc_args implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'FooService_simple_rpc_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.simple_rpc_args",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class FooService_simple_rpc_result extends \ThriftSyncStructWithoutResult {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'FooService_simple_rpc_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.FooService_simple_rpc_result",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class RenamedServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return \tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.FooService",
        "functions" => vec[
          \tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "simple_rpc",
              "return_type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_VOID_TYPE,
                )
              ),
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TServiceAnnotations {
    return shape(
      'service' => dict[
        '\thrift\annotation\hack\Name' => \thrift\annotation\hack\Name::fromShape(
          shape(
            "name" => "RenamedService",
          )
        ),
      ],
      'functions' => dict[
      ],
    );
  }
}
